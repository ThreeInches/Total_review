//#include <iostream>
//
//using namespace std;
//
////构造函数概念
////构造函数是一个特殊的成员函数，名字与类名相同，创建类类型对象时由编译器自动调用，保证每个数据成员都有一个合适的初始值，并且在对象的生命周期内只调用一次。
//
//class Date1
//{
//public:
//	void Display()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//	void SetDate(int yeay, int month, int day)
//	{
//		_year = yeay;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////构造函数是特殊的成员函数，构造函数的任务并不是开辟空间创建对象额，而是初始化对象
////构造函数的特征
////1、函数名与类名相同
////2、无返回值
////3、对象实例化编译器自动调用对应的构造函数
////4、构造函数可以重载
////5、如果类中没有显示定义构造函数，则C++编译器会自动生成一个构造函数，一旦用户显示定义，编译器将不再生成
////6、无参构造函数和全缺省参数的构造函数都称为默认构造函数，并且默认构造函数只能有一个。
//
//class Date2
//{
//public:
//	//无参构造
//	Date2 ()
//	{
//
//	}
//	//带参构造
//	Date2 (int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate2()
//{
//	Date2 d3;//调用无参构造
//	Date2 d4(2020, 3, 27);//调用带参构造
//
//	//注意：调用无参构造不能带括号，不然会当成函数声明
//	Date2 d5();//会被当做函数d5无参，返回Date类的函数声明。
//}
//
//class Date3
//{
//public:
//	////无参构造
//	//Date3 ()
//	//{
//
//	//}
//	////带参构造
//	//Date3 (int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate3()
//{
//	Date3 d6;//此处调用的是类的默认构造函数，故可以成功创建对象。
//}
//
//class Date4
//{
//public:
//	//无参构造
//	Date4 ()
//	{
//		_year = 2020;
//		_month = 3;
//		_day = 27;
//	}
//	//全缺省参数构造
//	Date4 (int year = 2020, int month = 3, int day = 27)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate4()
//{
//	//Date4 d;//报错，因为Date4中含有多个构造函数，创建对象时不知该调用哪个。
//}
//
//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time ()" << endl;
//	}
//
//	Time()
//	{
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//
//};
//
//class Date5
//{
//private:
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//	//自定义类型
//	Time _t;
//};
//
//void TestDate5()
//{
//	Date5 d5;
//}
//
////成员变量的命名风格
//class Date6
//{
//public:
//	Date6(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};
//
////成员变量的另外一种命名风格
//class Date7
//{
//public:
//	Date7 (int year)
//	{
//		m_year = year;
//	}
//private:
//	int m_year;
//};
//
//int main()
//{
//	Date1 d1, d2;
//
//	d1.SetDate(2020, 1, 24);
//	d2.SetDate(2020, 3, 26);
//
//	d1.Display();
//	d2.Display();
//
//	system("pause");
//	return 0;
//}
