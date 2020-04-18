//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1、在继承中基类和派生类有独立的作用域
////2、子类和父类中有同名成员，子类成员将屏蔽对同名成员的直接访问，这种情况叫隐藏（重定义）
////3、只需要函数名同名就可构成隐藏
////4、在继承中尽量避免重定义
//
//class Person
//{
//protected:
//	string m_name = "zhangsan";
//	int m_num = 610;
//};
//
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << "name : " << m_name << endl;
//		cout << "num : " << m_num << endl;
//		cout << "stuid : " << m_stuid << endl;
//	}
//protected:
//	int m_stuid = 171;
//};
//
//class A
//{
//public:
//	void fun()
//	{
//		cout << "fun()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		//子类成员将屏蔽父类同名成员的直接访问
//		//但是可以使用基类::基类成员 显示访问
//		A::fun();
//		cout << "fun(int i)" << i << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.Print();
//
//	B b;
//	b.fun(10);
//	system("pause");
//	return 0;
//}
