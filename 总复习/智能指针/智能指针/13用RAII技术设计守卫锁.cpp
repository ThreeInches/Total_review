#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

template<class T>
class LockGuard
{
public:
	LockGuard(mutex& mtx)
		:m_mutex(mtx)
	{
		m_mutex.lock();
	}

	~LockGuard()
	{
		m_mutex.unlock();
	}

	LockGuard(const LockGuard<mutex>&) = delete;
private:
	mutex& m_mutex;
};

mutex mtx;
static int n = 0;

void Func()
{
	for (size_t i = 0; i < 100000; i++)
	{
		LockGuard<mutex> lock(mtx);
		n++;
	}
}

int main()
{
	int begin = clock();
	thread t1(Func);
	thread t2(Func);
	t1.join();
	t2.join();
	int end = clock();
	cout << n << endl;
	cout << "cost time:" << end - begin << endl;
	system("pause");
	return 0;
}
