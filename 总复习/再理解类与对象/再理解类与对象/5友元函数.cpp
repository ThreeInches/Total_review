#include <iostream>
#include <cstring>

using namespace std;

//友元分为友元函数和友元类
//友元提供了一种突破封装的方式，会提供便利，但是同样会增加耦合

//友元函数
class Date
{
friend ostream& operator<<(ostream& _cout, const Date& d);
friend istream& operator>>(istream& _cin, const Date& d);
public:
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{

	}
public:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << " " << d._month << " " << d._day << endl;

	return _cout;
}

istream& operator>>(istream& _cin, Date& d)
{
	_cin >> d._year;
	_cin >> d._month;
	_cin >> d._day;

	return _cin;
}

//1、友元函数可以访问私有成员，但不是成员函数
//2、友元函数不能用const修饰
//3、友元函数可以在类定义的任何地方声明，不受类访问限定符的限制
//4、一个函数可以是多个类的友元函数
//5、友元函数的调用和普通函数调用的原理相同

int main()
{
	Date d(2020, 3, 28);
	cin >> d;
	cout << d << endl;
	system("pause");
	return 0;
}
