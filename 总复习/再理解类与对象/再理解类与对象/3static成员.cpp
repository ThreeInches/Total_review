//#include <iostream>
//
//using namespace std;
//
////声明为static的类成员称为类的静态成员，用static修饰的成员变量称为静态成员变量，用static修饰的成员函数称为静态成员函数，静态的成员变量一定要在类外进行初始化。
//class A
//{
//public:
//	A()
//	{
//		++_scount;
//	}
//
//	A(const A& t)
//	{
//		++_scount;
//	}
//
//	static int GetACount()
//	{
//		return _scount;
//	}
//private:
//	static int _scount;
//};
//
//int A::_scount = 0;
//
////特性：
////1、静态成员为所有类的对象所共享
////2、静态成员变量必须在类外定义，定义时不能加static关键字
////3、类静态成员即可用类名::静态成员或者对象.静态成员来访问
////4、静态成员函数没有隐藏的this指针，不能访问任何非静态成员
////5、静态成员和类的普通成员一样，也有三种访问限定符，public，protected，private。
////6、非静态成员函数可以调用静态成员函数
//
//int main()
//{
//	cout << A::GetACount() << endl;
//
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//	system("pause");
//	return 0;
//}
