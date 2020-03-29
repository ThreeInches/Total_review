#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

//C++为了增强代码的可读性，引入了运算符重载，运算符重载是具有特殊函数名的函数。
//函数名称为：关键字operator后面接所需要重载的运算符符号
//函数原型：返回值类型operator操作符（参数列表）

//注：
//1、不能通过连接其他符号来创建新的操作符：比如operator@
//2、重载操作符必须有一个类类型或者枚举类型的操作数
//3、用于内置类型的操作符，其含义不能改变，例如：内置类型+，不能改变其含义
//4、作为类成员的重载函数时，其形参看起来比操作数的数目少1成员函数的操作符有一个默认的形参this，限定为第一个形参
//5、. * :: sizeof ? : 不能重载

//赋值运算符重载
//1、参数类型
//2、返回值
//3、检测是否自己给自己赋值
//4、返回*this
//5、若是没有显示定义，编译器会自动生成，完成对象按字节序的值拷贝

//全局的operator==
class Date1
{
public:
	Date1(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
public:
	int _year;
	int _month;
	int _day;
};

//若是operator做全局的，那么封装性不能被保证
//此处可以做出友元或者直接做成成员函数
bool operator==(const Date1& d1, const Date1& d2)
{
	return d1._year == d2._year && d1._month == d2._month && d1._day == d2._day;
}

class Date2
{
public:
	Date2(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//bool operator==(Date* this, const Date& d2)
	//此处左操作数是this指向的调用函数的对象
	bool operator==(const Date2& d2)
	{
		return _year == d2._year && _month == _month && _day == _day;
	}
public:
	int _year;
	int _month;
	int _day;
};

class Date3
{
public:
	Date3(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date3(const Date3& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	Date3& operator=(const Date3& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
	}
public:
	int _year;
	int _month;
	int _day;
};

class Date4
{
public:
	Date4(int year = 2020, int month = 3, int day = 28)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	bool operator==(const Date4& d2)
	{
		return _year == d2._year && _month == _month && _day == _day;
	}
public:
	int _year;
	int _month;
	int _day;
};

class String
{
public:
	String(const char* str = "")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}

	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};

int main()
{
	Date1 d1(2020, 3, 27);
	Date1 d2(2020, 3, 28);
	cout << (d1 == d2) << endl;

	Date2 d3(2020, 3, 28);
	Date2 d4(2020, 3, 28);
	cout << (d3 == d4) << endl;

	Date4 d5;
	Date4 d6(2020, 3, 28);
	d5 = d6;
	cout << (d5 == d6) << endl;

	String s1("Hello");
	String s2("World");

	s1 = s2;

	system("pause");
	return 0;
}
