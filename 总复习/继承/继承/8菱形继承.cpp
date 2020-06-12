#include <iostream>
#include  <string>
using namespace std;

//单继承：一个派生类只有一个直接基类
//多继承：一个派生类有两个及以上的父类
//菱形继承：是多继承的一种特殊情况

//菱形继承存在数据的冗余和二义性问题

class Person
{
public:
	string m_name;
};

class Student : public Person
{
protected:
	int m_num;
};

class Teacher : public Person
{
protected:
	int m_stuid;
};


class Assistant : public Student, public Teacher
{
protected:
	string m_majorCourse;
};

int main()
{
	Assistant a;
	//a.m_name = "zhangsan";//此处出现二义性问题

	a.Student::m_name = "zhangsan";
	a.Teacher::m_name = "lisi";
	system("pause");
	return 0;
}
