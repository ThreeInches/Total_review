#include <iostream>
#include <memory>
#include <thread>

using namespace std;

//1、智能指针对象中引用计数是多个智能指针对象共享的，两个线程中智能指针的引用计数同时++或--，这个操作不是原子的，引用计数原来是1，++了两次，可能还是2，这样会导致资源未释放或者程序崩溃，--需要加锁
//2、智能指针管理的对象存放在堆上，两个线程中同时去访问，会导致线程安全问题

struct Date
{
	int m_year;
	int m_month;
	int m_day;
};

void SharedPtrFunc(shared_ptr<Date>& sp, size_t n)
{
	cout << sp.get() << endl;
	for (size_t i = 0; i < n; i++)
	{
		shared_ptr<Date> copy(sp);

		copy->m_year++;
		copy->m_month++;
		copy->m_day++;
	}
}

int main()
{
	shared_ptr<Date> p(new Date);
	cout << p.get() << endl;

	const size_t n = 100;
	thread t1(SharedPtrFunc, p, n);
	thread t2(SharedPtrFunc, p, n);

	t1.join();
	t2.join();

	cout << p->m_year << endl;
	cout << p->m_month << endl;
	cout << p->m_day << endl;
	system("pause");
	return 0;
}
