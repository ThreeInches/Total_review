//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Date1
//{
//public:
//	Date1(int year = 2020, int month = 3, int day = 27)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//此处必须注意要穿引用，若是传值的话会出现无限递归调用
//	Date1(const Date1& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Date2
//{
//public:
//	Date2(int year = 2020, int month = 3, int day = 27)
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
//};
//
//class String
//{
//public:
//	String(const char* str = "zhangsan")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	~String()
//	{
//		cout << "~String()" << endl;
//		//free(_str);
//		//_str = NULL;
//	}
//
//private:
//	char* _str;
//};
//
//int main()
//{
//	Date1 d1;
//	Date1 d2(d1);
//
//	Date2 d3;
//	Date2 d4(d3);
//
//	String s1("Hello,World!");
//	String s2(s1);
//	system("pause");
//	return 0;
//}
