//#include <iostream>
//
//using namespace std;
//
////此处的构造函数是赋初值，而非初始化。
//class Date1
//{
//public:
//	Date1(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
////初始化列表
////初始化列表指的是以一个冒号开始，接着是以逗号分隔符分隔成员变量，每个成员变量后面跟一个放在括号里面的初始值或表达式。
//class Date2
//{
//public:
//	Date2(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
////注：
////1、每个成员变量在初始化列表中只能出现一次（初始化只能初始化一次）
////2、类中包含以下成员，必须放在初始化列表位置进行初始化
////2.1、引用成员变量
////2.2、const成员变量
////2.3、类类型成员（该类没有默认构造函数）
////3、尽可能使用初始化列表，因为自定义类型的成员变量一定会先试用初始化列表进行初始化
////4、成员变量在类中声明次序就是其在初始化列表中的初始化顺序，与其在初始化列表中的先后次序无关。
//
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//
//private:
//	A _aobj;//没有默认构造函数
//	int& _ref;//引用
//	const int _n;//const
//};
//
//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	Date(int day)
//	{
//
//	}
//private:
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d1(1);
//	system("pause");
//	return 0;
//}
