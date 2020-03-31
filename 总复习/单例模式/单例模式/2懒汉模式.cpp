#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

//懒汉模式
//延迟加载
//优点：第一次使用实例对象时，创建对象，进程启动无负载，多个单例实例启动顺序自由控制
//缺点：复杂

class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (m_pInstance == nullptr)
		{
			m_mutex.lock();
			if (m_pInstance == nullptr)
			{
				m_pInstance = new Singleton();
			}
			m_mutex.unlock();
		}
		return m_pInstance;
	}

	//实现一个内嵌垃圾回收类
	class CGarbo
	{
	public:
		~CGarbo()
		{
			if (Singleton::m_pInstance)
			{
				delete Singleton::m_pInstance;
			}
		}
	public:
		//定义一个静态成员变量，程序结束时，系统会自动调用它的析构函数从而释放单例对象
		static CGarbo Garbo;
	};

private:
	//构造函数
	Singleton()
	{

	}

	//C++98防拷贝
	Singleton(const Singleton&);
	Singleton& operator=(Singleton const&);
	
	////C++11防止拷贝
	//Singleton(const Singleton&) = delete;
	//Singleton& operator=(Singleton const&) = delete;

	static Singleton* m_pInstance;//单例对象指针
	static mutex m_mutex;//互斥锁

};

Singleton* Singleton::m_pInstance = nullptr;
Singleton::CGarbo Garbo;
mutex Singleton::m_mutex;

void Func(int n)
{
	cout << Singleton::GetInstance() << endl;
}

int main()
{

	thread t1(Func, 10);
	thread t2(Func, 10);

	t1.join();
	t2.join();

	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;

	system("pause");
	return 0;
}
