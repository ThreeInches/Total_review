#include <iostream>

using namespace std;

template<class T>
class UniquePtr
{
public:
	UniquePtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{

	}

	~UniquePtr()
	{
		if (m_ptr)
		{
			delete m_ptr;
		}
	}

	T& operator * ()
	{
		return *m_ptr;
	}

	T* operator -> ()
	{
		return m_ptr;
	}
private:
	//C++98防拷贝和赋值（拷贝和赋值私有化，只声明）
	UniquePtr(UniquePtr<T> const &);
	UniquePtr& operator = (UniquePtr<T> const &);
	//C++11防拷贝和赋值用delete
	UniquePtr(UniquePtr<T> const &) = delete;
	UniquePtr& operator = (UniquePtr<T> const &) = delete;
private:
	T* m_ptr;
};

struct Date
{
	int m_year;
	int m_month;
	int m_day;
};

int main()
{
	UniquePtr<Date> up(new Date);
	//UniquePtr<Date> copy(up);

	up->m_year = 2020;
	up->m_month = 4;
	up->m_day = 28;
	system("pause");
	return 0;
}
