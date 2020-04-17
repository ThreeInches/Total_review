#include <iostream>

using namespace std;

//友元类的概念
//友元类的所有成员函数都可以是另一个类的友元函数，都可以访问另一个类中的非公有成员
//
//
//注：
//1、友元关系是单向的，不具有交换性
//2、友元关系不能传递

class Date;//前置声明

class Time
{
	friend class Date;//声明Date为Time的友元类，在Date类中可以访问Time类的私有成员
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{
		
	}


private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 2020, int month = 3, int day = 30)
		:_year(year)
		, _month(month)
		, _day(day)
	{

	}

	void SetTimeOfDate(int hour, int minute, int second)
	{
		//直接访问Time类的私有成员变量
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};

int main()
{

	system("pause");
	return 0;
}
