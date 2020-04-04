#include <iostream>
#include <string>
using namespace std;

void teststring1()
{
	string s;
	s.push_back(' ');//尾插
	s.append("hello");//追加字符串
	s += ',';//追加字符
	s += "world!";//追加字符串
	cout << s << endl;
	cout << s.c_str() << endl;//以c语言的方式打印字符串

	//获取file的后缀
	string file("string.cpp");
	size_t pos = file.rfind(".");
	string suffix(file.substr(pos, file.size() - pos));
	cout << suffix << endl;

	//取出url中的域名
	string url("http://www.cplusplus.com/reference/string/string/find/");
	cout << url << endl;
	size_t start = url.find("://");
	if (start == string::npos)
	{
		cout << "invalid url" << endl;
		return;
	}
	start += 3;
	size_t finish = url.find('/', start);
	string address = url.substr(start, finish - start);
	cout << address << endl;

	//删除url中的协议前缀
	pos = url.find("://");
	url.erase(0, pos + 3);
	cout << url << endl;
}

//注：
//1、在string尾部追加字符时，s.push_back(c)/s.append(1, c)/s += 'c'三种方式实现方式差不多，一般情况下string类的+=操作用的比较多，+=操作不仅可以连接单个字符，也可连接字符串
//2、对string操作时，如果能够大概预估到多少个字符，可以先通过reverse把空间预留好

int main()
{
	teststring1();
	system("pause");
	return 0;
}
