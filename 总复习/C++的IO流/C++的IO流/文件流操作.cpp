#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//文件的操作步骤：
//1、定义一个文件流对象
//2、使用文件流对象打开一个磁盘文件
//3、使用提取或插入运算符对文件进行读写操作
//4、关闭文件

class ServerInfo
{
public:
	char m_ip[32];//ip
	int m_port;//端口
};

class ConfigManger
{
public:
	ConfigManger(const char* configfile = "bitserver.config")
		:m_configfile(configfile)
	{

	}

	void WriteBin(const ServerInfo& info)
	{
		ofstream ofs(m_configfile, ifstream::in | ifstream::binary);
		ofs.write((const char*)& info, sizeof(ServerInfo));
		ofs.close();
	}

	void ReadBin(ServerInfo& info)
	{
		ifstream ifs(m_configfile, ifstream::out | ifstream::binary);
		ifs.read((char*)& info, sizeof(ServerInfo));
		ifs.close();
	}

	void WriteText(const ServerInfo& info)
	{
		ofstream ofs(m_configfile);
		ofs << info.m_ip << endl;
		ofs << info.m_port << endl;
		ofs.close();
	}

	void ReadText(ServerInfo& info)
	{
		ifstream ifs(m_configfile);
		ifs >> info.m_ip;
		ifs >> info.m_port;
		ifs.close();
	}

private:
	string m_configfile;//配置文件
};

int main()
{
	ConfigManger cfgMgr;
	ServerInfo wtinfo;
	ServerInfo rdinfo;
	strcpy(wtinfo.m_ip, "127.0.0.1");
	wtinfo.m_port = 80;

	// 二进制读写
	cfgMgr.WriteBin(wtinfo);
	cfgMgr.ReadBin(rdinfo);
	cout << rdinfo.m_ip << endl;
	cout << rdinfo.m_port << endl;

	// 文本读写
	cfgMgr.WriteText(wtinfo);
	cfgMgr.ReadText(rdinfo);
	cout << rdinfo.m_ip << endl;
	cout << rdinfo.m_port << endl;
	system("pause");
	return 0;
}
