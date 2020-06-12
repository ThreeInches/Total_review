#include <iostream>

using namespace std;

template<class T>
class AutoPtr
{
public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{

	}

	~AutoPtr()
	{
		if (m_ptr)
		{
			delete m_ptr;
		}
	}

	AutoPtr<T>& operator = (AutoPtr<T>& ap)
	{
		if (*this != ap)
		{
			if (m_ptr)
			{
				//释放当前对象的资源
				delete m_ptr;
			}
			//将ap对象的资源转移到当前对象
			m_ptr = ap.m_ptr;
			ap.m_ptr = nullptr;
		}
		return *this;
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
	AutoPtr<Date> ap(new Date);
	AutoPtr<Date> copy(ap);

	//ap对象访问资源时就会出现问题
	ap->m_year = 2020;
	ap->m_month = 4;
	ap->m_day = 28;
	system("pause");
	return 0;
}
