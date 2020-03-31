#include <iostream>

using namespace std;
//单利模式
//一个类只能创建一个对象，即单例模式，该模式可以保证系统中该类只有一个实例，并提供一个访问它的全局访问点，该实例被所有程序模块共享
//
//饿汉模式（不管用不用，程序启东时就创建一个唯一的实例对象）
//优点：简单
//缺点：可能会导致进程启动慢，且如果有多个单例模式对象实例启动顺序不确定
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		return &m_instance;
	}
private:
	//构造函数私有
	Singleton()
	{

	}

	//C++98防拷贝
	Singleton(const Singleton&);
	Singleton& operator=(Singleton const&);

	//C++11防止拷贝
	Singleton(const Singleton&) = delete;
	Singleton& operator=(Singleton const&) = delete;

	static Singleton m_instance;
};

Singleton Singleton::m_instance;//在程序入口之前就完成单利对象的初始化

int main()
{

	system("pause");
	return 0;
}
