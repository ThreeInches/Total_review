#include <iostream>
#include <memory>
using namespace std;

struct Date
{
	int m_year;
	int m_month;
	int m_day;
};

int main()
{
	unique_ptr<Date> up(new Date);
	//C++11∑¿÷πøΩ±¥∫Õ∏≥÷µ
	//unique_ptr<Date> copy(up);
	up->m_year = 2020;
	up->m_month = 4;
	up->m_day = 28;
	system("pause");
	return 0;
}
