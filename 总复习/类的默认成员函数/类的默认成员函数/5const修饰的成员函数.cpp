//#include <iostream>
//
//using namespace std;
//
////const修饰的成员函数实际上修饰的是成员函数的this指针
////表面该成员函数中不能对类的任何成员进行修改
//
////非const对象可以调用const成员函数
////非const成员函数可以调用const成员函数
//class Date
//{
//public:
//	Date(int year = 2020, int month = 3, int day = 28)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Display()
//	{
//		cout << "Display()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl;
//	}
//
//	void Display()const
//	{
//		cout << "Display()const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Display();
//
//	const Date d2;
//	d2.Display();
//	system("pause");
//	return 0;
//}
