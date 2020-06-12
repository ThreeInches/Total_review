#include <iostream>
#include <memory>

using namespace std;

class Date
{
public:
	Date()
	{
		cout << "Date()" << endl;
	}

	~Date()
	{
		cout << "~Date()" << endl;
	}

public:
	int m_year;
	int m_month;
	int m_day;
};

int main()
{
	auto_ptr<Date> ap(new Date);
	auto_ptr<Date> copy(ap);

	//当对象拷贝或者赋值后，前面的对象就悬空了

	ap->m_year = 2020;
	ap->m_month = 4;
	ap->m_day = 28;
	system("pause");
	return 0;
}
