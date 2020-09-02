#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <pthread.h>
#include <zlib.h>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include "httplib.h"

#define NOHHOT_TIME 10 //最后一次访问时间在10秒以外，则为非热点文件
#define INTERVAL_TIME 30 //每隔30秒检测一次非热点文件
#define BACKUP_DIR "./backup/" //文件的备份路径
#define GZFILE_DIR "./gzfile/" //压缩包存放路径
#define DATA_FILE "./list.backup" //数据管理模块的数据备份文件名称

//文件读写工具
class FileUtil
{
public:
    //从文件中读取数据
    static bool Read(const std::string& name, std::string* body)
    {
        std::ifstream fs(name, std::ios::binary);
        if(fs.is_open() == false)
        {
            std::cout << "open file " << name << " failed" << std::endl;
            return false;
        }
        int64_t size = boost::filesystem::file_size(name);
        body->resize(size);
        fs.read(&(*body)[0], size);
        if(fs.good() == false)
        {
            std::cout << "read file " << name << " failed" << std::endl; 
            return false;
        }
        fs.close();
        return true;
    }

    //向文件中写入数据
    static bool Write(const std::string& name, const std::string& body)
    {
        //ofstream打开文件默认覆盖写入
        std::ofstream ofs(name, std::ios::binary);
        if(ofs.is_open() == false)
        {
            std::cout << "open file " << name << " failed" << std::endl;
            return false;
        }
        ofs.write(&body[0], body.size());
        if(ofs.good() == false)
        {
            std::cout << "write file" << name << " failed" << std::endl;
            return false;
        }
        ofs.close();
        return true;
    }
};

//文件压缩工具
class CompressUtil
{
public:
    //压缩文件
    static bool Compress(const std::string& dst, const std::string& src)
    {
        std::string body;
        FileUtil::Read(src, &body);

        gzFile gf = gzopen(dst.c_str(), "wb");
        if(gf == NULL)
        {
            std::cout << "open gzfile " << dst << " failed" << std::endl;
            return false;
        }

        int wlen = 0;
        while(wlen < (int)body.size())
        {
            int ret = gzwrite(gf, &body[wlen], body.size() - wlen);
            if(ret == 0)
            {
                std:: cout << "file " << dst << " write compress failed" <<std::endl;
                return false;
            }
            wlen += ret;
        }
        gzclose(gf);
        return true;
    }

    //解压缩文件
    static bool UnCompress(const std::string& dst, const std::string& src)
    {
        std::ofstream ofs(dst, std::ios::binary);
        if(ofs.is_open() == false)
        {
            std::cout << "open file " << dst << " failed" << std::endl;
            return false;
        }

        gzFile gf = gzopen(src.c_str(), "rb");
        if(gf == 0)
        {
            std::cout << "open file " << src << " failed" << std::endl;
            return false;
        }

        char tmp[4096] = { 0 };
        int ret;
        while((ret = gzread(gf, tmp, 4096)) > 0)
        {
            ofs.write(tmp, ret);
        }
        ofs.close();
        gzclose(gf);
        return true;
    }
};

//数据管理模块
class DataManager
{
public:
    DataManager(const std::string& path)
        :m_back_file(path)
    {
        pthread_rwlock_init(&m_rwlock, NULL);
    }

    ~DataManager()
    {
        pthread_rwlock_destroy(&m_rwlock);
    }

    //判断文件是否存在
    bool Exists(const std::string& name)
    {
        pthread_rwlock_rdlock(&m_rwlock);
        auto it = m_file_list.find(name);
        if(it == m_file_list.end())
        {
            pthread_rwlock_unlock(&m_rwlock);
            return false;
        }
        pthread_rwlock_unlock(&m_rwlock);
        return true;
    }

    //判断文件是否已经压缩
    bool IsCompress(const std::string& name)
    {
        pthread_rwlock_rdlock(&m_rwlock);
        auto it = m_file_list.find(name);
        if(it == m_file_list.end())
        {
            pthread_rwlock_unlock(&m_rwlock);
            return false;
        }

        if(it->first == it->second)
        {
            pthread_rwlock_unlock(&m_rwlock);
            return false;
        }
        pthread_rwlock_unlock(&m_rwlock);
        return true;
    }

    //获取所有文件名称
    bool GetAllName(std::vector<std::string>* list)
    {
        pthread_rwlock_rdlock(&m_rwlock);
        for(auto it = m_file_list.begin(); it != m_file_list.end(); it++)
        {
            list->push_back(it->first);
        }
        pthread_rwlock_unlock(&m_rwlock);
        return true;
    }

    //获取压缩文件列表
    bool CompressList(std::vector<std::string>* list)
    {
        pthread_rwlock_rdlock(&m_rwlock);
        for(auto it = m_file_list.begin(); it != m_file_list.end(); it++)
        {
            if(it->first != it->second)
            {
                list->push_back(it->first);
            }
        }
        pthread_rwlock_unlock(&m_rwlock);
        return true;
    }

    //获取未压缩文件列表
    bool NonCompressList(std::vector<std::string>* list)
    {
        pthread_rwlock_rdlock(&m_rwlock);
        for(auto it = m_file_list.begin(); it != m_file_list.end(); it++)
        {
            if(it->first == it->second)
            {
                list->push_back(it->first);
            }
        }
        pthread_rwlock_unlock(&m_rwlock);
        return true;
    }

    //根据源文件名称获取压缩包名称
    bool GetGzName(const std::string& src, std::string* dst)
    {
        auto it = m_file_list.find(src);
        if(it == m_file_list.end())
        {
            return false;
        }
        *dst = it->second;
        return true;
    }

    //插入/更新数据
    bool Insert(const std::string& src, const std::string& dst)
    {
        pthread_rwlock_wrlock(&m_rwlock);
        m_file_list[src] = dst;
        pthread_rwlock_unlock(&m_rwlock);
        Storage();
        return true;
    
    }

    //数据改变后进行持久化存储
    bool Storage()
    {
        //将数据持久化存储就需要将数据对象进行序列化存储
        //将数据组织成src  dst \r\n
        std::stringstream tmp;
        pthread_rwlock_rdlock(&m_rwlock);
        for(auto it = m_file_list.begin(); it != m_file_list.end(); it++)
        {
            tmp << it->first << " " << it->second << "\r\n";
        }
        pthread_rwlock_unlock(&m_rwlock);
        //将数据备份到文件中
        FileUtil::Write(m_back_file, tmp.str());
        return true;
    }

    //启动时加载原有数据
    bool InitLoad()
    {
       //将数据的持久化存储文件中加载数据
        std::string body;
        if(FileUtil::Read(m_back_file, &body) == false)
        {
            return false;
        }

        std::vector<std::string> list;
        boost::split(list, body, boost::is_any_of("\r\n"), boost::token_compress_off);
        for(auto& e : list)
        {
            size_t pos = e.find(" ");
            if(pos == std::string::npos)
            {
                continue;
            }
            std::string key = e.substr(0, pos);
            std::string val = e.substr(pos + 1);
            Insert(key, val);
        }
        return true;
    }
private:
    std::string m_back_file;
    std::unordered_map<std::string, std::string> m_file_list;
    pthread_rwlock_t m_rwlock;
};

DataManager data_manager(DATA_FILE);

//非热点文件压缩模块
class NonHotCompress
{
public:
    NonHotCompress(const std::string& backup = BACKUP_DIR, const std::string& gzfile = GZFILE_DIR)
        :m_bu_file(backup)
         ,m_gz_file(gzfile)
    {

    }

    ~NonHotCompress()
    {

    }

    //启动压缩模块
    bool Start()
    {
        while(1)
        {
            std::vector<std::string> list;
            data_manager.NonCompressList(&list);
            //判断文件是否为热点文件，对非热点文件进行压缩存储，并更新数据信息
            for(size_t i = 0; i < list.size(); i++)
            {
                if(IsHotFile(list[i]) == false)
                {
                    std::string src_filename = list[i];
                    std::string dst_filename = list[i] + ".gz";
                    std::string src_pathname = m_bu_file + src_filename;
                    std::string dst_pathname = m_gz_file + dst_filename;
                    //对非热点文件进行压缩存储
                    if(CompressUtil::Compress(dst_pathname, src_pathname) == true)
                    {
                        //更新数据信息
                        data_manager.Insert(src_filename, dst_filename);
                        //删除源文件
                        unlink(src_pathname.c_str());
                    }
                }
            }
            sleep(INTERVAL_TIME);
        }
        return true;
    }
private:
    //判断一个文件是否是一个热点文件
    bool IsHotFile(const std::string& name)
    {
        time_t cur_t = time(NULL);
        struct stat st;
        if(stat(name.c_str(), &st) < 0)
        {
            std::cout << "get file " << name << " stat failed" <<  std::endl;
            return false;
        }

        if((cur_t - st.st_atime) > NOHHOT_TIME)
        {
            return false;
        }
        return true;
    }
private:
    std::string m_bu_file; //压缩前文件所在路径
    std::string m_gz_file; //压缩后文件的存储路径
};

//启动网络通信模块
class Server
{
public:
    Server()
    {

    }

    ~Server()
    {

    }
    
    //启动网络通信模块
    bool Start()
    {
        m_server.Put("/(.*)", Upload);
        m_server.Get("/list", List);
        m_server.Get("/download/(.*)", Download);

        m_server.listen("0.0.0.0", 9000);
        return true;
    }
private:
    //文件上传请求
    static void Upload(const httplib::Request& req, httplib::Response& rsp)
    {
        std::string filename = req.matches[1];
        std::string pathname = BACKUP_DIR + filename;
        FileUtil::Write(pathname, req.body);
        data_manager.Insert(filename, filename);
        rsp.status = 200;
        return;
    }
    
    //文件浏览请求
    static void List(const httplib::Request& req, httplib::Response& rsp)
    {
        std::vector<std::string> list;
        data_manager.GetAllName(&list);
        std::stringstream tmp;
        tmp << "<html><body><hr />";
        for(size_t i = 0; i < list.size(); i++)
        {
            tmp << "<a href='/download/" << list[i] << "'>" << list[i] <<"</a>";
            tmp << "<hr />";
        }
        tmp << "</body></html>";
        rsp.set_content(tmp.str().c_str(), tmp.str().size(), "text/html");
        rsp.status = 200;
        return;
    }

    //文件下载请求
    static void Download(const httplib::Request& req, httplib::Response& rsp)
    {
        std::string filename = req.matches[1]; 
        if(data_manager.Exists(filename) == false)
        {
            rsp.status = 404;
            return;
        }
        std::string pathname = BACKUP_DIR + filename;
        if(data_manager.IsCompress(filename) == true)
        {
            std::string gzfile;
            data_manager.GetGzName(filename, &gzfile);
            std::string gzpathname = GZFILE_DIR + gzfile;
            CompressUtil::UnCompress(pathname, gzpathname);
            unlink(gzpathname.c_str());
            data_manager.Insert(filename, filename);
        }
        FileUtil::Read(pathname, &rsp.body);
        rsp.set_header("Content-Type", "application/octet-stream");
        rsp.status = 200;
        return;
    }
private:
    //文件上传备份路径
    std::string m_file_dir;
    httplib::Server m_server;
};

