//#include <iostream>
//#include <string>
//
//using namespace std;
//
////友元关系不能继承，基类友元不能访问派生类私有和保护成员
//
//class Student;
//class Person
//{
//public:
//	Person(const string& s = "zhangsan")
//		:m_name(s)
//	{
//
//	}
//
//	friend void display(const Person& p, const Student& s);
//protected:
//	string m_name;
//};
//
//class Student : public Person
//{
//public:
//	Student(const string& s, const int num = 10)
//		:Person(s)
//		, m_num(num)
//	{
//
//	}
//
//public:
//	int m_num;
//};
//
//void display(const Person& p, const Student& s)
//{
//	cout << p.m_name << endl;
//	cout << s.m_num << endl;
//}
//
//int main()
//{
//	Person p;
//	Student s("lisi", 20);
//	display(p, s);
//	system("pause");
//	return 0;
//}
