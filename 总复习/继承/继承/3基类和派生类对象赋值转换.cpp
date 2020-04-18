//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1、派生类对象可以赋值给基类的对象/基类的指针/基类的引用
////2、基类对象不能给派生类对象赋值
////3、基类的指针可以通过强制类型转换赋值给派生类的指针，此时基类指针必须是指向派生类对象的时候才是安全的
//
//class Person
//{
//protected:
//	string m_name;
//	string m_sex;
//	int m_age;
//};
//
//class Student : public Person
//{
//public: 
//	int m_stuid;
//};
//
//int main()
//{
//	Student sobj;
//	//子类对象可以赋值给基类的对象/基类的指针/基类的引用
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//	
//	//基类对象不能赋值给派生类
//	//sobj = pobj;
//
//	//基类的指针可以通过强制类型转换赋值给派生类指针
//	pp = &sobj;
//	Student* ps1 = (Student*)pp;
//	ps1->m_stuid = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp;
//	ps2->m_stuid = 10;
//	system("pause");
//	return 0;
//}
