#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include "httplib.h"

#define SERVER_IP "192.168.30.141"
#define SERVER_PORT 9000
#define LISTEN_DIR "./backup/"
#define STORAGE_FILE "./list.backup"

//文件读写工具
class FileUtil
{
public:
	//从文件中读取数据
	static bool Read(const std::string& name, std::string* body)
	{
		std::ifstream fs(name, std::ios::binary);
		if (fs.is_open() == false)
		{
			std::cout << "open file " << name << " failed" << std::endl;
			return false;
		}
		int64_t size = boost::filesystem::file_size(name);
		body->resize(size);
		fs.read(&(*body)[0], size);
		if (fs.good() == false)
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
		if (ofs.is_open() == false)
		{
			std::cout << "open file " << name << " failed" << std::endl;
			return false;
		}
		ofs.write(&body[0], body.size());
		if (ofs.good() == false)
		{
			std::cout << "write file" << name << " failed" << std::endl;
			return false;
		}
		ofs.close();
		return true;
	}
};

//数据管理模块
class DataManager
{
public:
	DataManager(const std::string& filename)
		:m_storage_file(filename)
	{

	}

	//插入或更新数据
	bool Insert(const std::string& key, const std::string& val)
	{
		m_backup_list[key] = val;
		Storage();
		return true;
	}

	//通过文件名称获取文件的etag信息
	bool GetEtag(const std::string& key, std::string* val)
	{
		auto pos = m_backup_list.find(key);
		if (pos == m_backup_list.end())
		{
			return false;
		}
		*val = pos->second;
		return true;
	}

	//持久化存储
	bool Storage()
	{
		//将数据持久化存储就需要将数据对象进行序列化存储
		//将数据组织成src  dst \r\n
		std::stringstream tmp;
		for (auto it = m_backup_list.begin(); it != m_backup_list.end(); it++)
		{
			tmp << it->first << " " << it->second << "\r\n";
		}
		//将数据备份到文件中
		FileUtil::Write(m_storage_file, tmp.str());
		return true;
	}

	//初始化加载原有数据
	bool InitLoad()
	{
		//将数据的持久化存储文件中加载数据
		std::string body;
		if (FileUtil::Read(m_storage_file, &body) == false)
		{
			return false;
		}

		std::vector<std::string> list;
		boost::split(list, body, boost::is_any_of("\r\n"), boost::token_compress_off);
		for (auto& e : list)
		{
			size_t pos = e.find(" ");
			if (pos == std::string::npos)
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
	//持久化存储文件名称
	std::string m_storage_file;
	//备份的文件信息
	std::unordered_map<std::string, std::string> m_backup_list;
};

DataManager data_manager(STORAGE_FILE);

//目录监控模块
class CloudClient
{
public:
	CloudClient(const std::string& listern_dir, const std::string& stroage_file, const std::string& server_ip, uint16_t server_port)
		:m_listen_dir(listern_dir)
		, m_storage_file(stroage_file)
		, m_server_ip(server_ip)
		, m_server_port(server_port)
	{

	}

	bool Start()
	{
		data_manager.InitLoad();
		while (1)
		{
			std::vector<std::string> list;
			GetBackUpFileList(&list);
			for (int i = 0; i < list.size(); i++)
			{
				std::string name = list[i];
				std::string pathname = m_listen_dir + name;
				std::string body;
				std::cout << pathname << "is need to backup" << std::endl;
				FileUtil::Read(pathname, &body);
				httplib::Client client(m_server_ip, m_server_port);
				std::string req_path = "/" + name;
				auto rsp = client.Put(req_path.c_str(), body, "application/octet-stream");
				if (rsp == NULL || (rsp == NULL && rsp->status != 200))
				{
					std::cout << pathname << "backup failed" << std::endl;
					continue;
				}
				std::string etag;
				GetEtag(pathname, &etag);
				data_manager.Insert(name, etag);

				std::cout << pathname << "backup success" << std::endl;
			}
			Sleep(1000);
		}
	}

	//获取需要备份的文件列表
	bool GetBackUpFileList(std::vector<std::string>* list)
	{
		//若目录不存在则创建目录
		if (boost::filesystem::exists(m_listen_dir) == false)
		{
			boost::filesystem::create_directories(m_listen_dir);
		}
		//进行目录监控，获取指定目录下的所有文件名称
		boost::filesystem::directory_iterator begin(m_listen_dir);
		boost::filesystem::directory_iterator end;
		for (; begin != end; ++begin)
		{
			if (boost::filesystem::is_directory(begin->status()))
			{
				//目录不需要进行备份
				//遇到目录直接跳过，（无层级目录）
				continue;
			}
			std::string pathname = begin->path().string();
			std::string name = begin->path().filename().string();
			std::string cur_etag;
			std::string old_etag;
			//获取当前etag
			GetEtag(pathname, &cur_etag);
			//获取原有etag
			data_manager.GetEtag(name, &old_etag);
			//当前etag和原有etag不相等，则文件需要备份
			if (cur_etag != old_etag)
			{
				list->push_back(name);
			}
		}
		return true;
	}

	//计算文件的eatg信息
	static bool GetEtag(const std::string& pathname, std::string* etag)
	{
		//etag文件大小-文件最后一次修改时间
		int64_t fsize = boost::filesystem::file_size(pathname);
		time_t mtime = boost::filesystem::last_write_time(pathname);
		*etag = std::to_string(fsize) + "-" + std::to_string(mtime);
		return true;
	}
private:
	std::string m_listen_dir;//监控的目录名称
	std::string m_storage_file;
	std::string m_server_ip;
	uint16_t m_server_port;
};