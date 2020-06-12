#include <iostream>

using namespace std;

//通过一套继承的规范体系，抛出派生类对象，捕获一个基类对象就可以

class Exception
{
protected:
	string m_errmsg;
	int m_id;
};

class SqlException : public Exception
{

};

class CatchException : public Exception
{

};

class HttpServerException : public Exception
{

};

int main()
{
	try
	{
		//抛出对象都是派生类对象
	}
	catch (const Exception& e)//这里只需要捕获基类异常就可以
	{

	}
	catch (...)
	{
		cout << "Unknow Exception" << endl;
	}
	system("pause");
	return 0;
}
