#include <iostream>
#include <string>

using namespace std;

//基类定义了static静态成员，则整个继承体系中只有一个这样的成员，无论派生类产生了多少子类，都只有一个static成员实例

class Person
{
public:
	Person()
	{
		++m_count;
	}
protected:
	string m_name;
public:
	static int m_count;
};

int Person::m_count = 0;

class Student : public Person
{
protected:
	int m_stuid;
};

class Gaduate :public Student
{
protected:
	string m_seminarCourse;
};

int main()
{
	Student s1;
	Student s2;
	Student s3;
	Gaduate s4;

	cout << "m_count " << Person::m_count << endl;
	Student::m_count = 0;
	cout << "m_count " << Person::m_count << endl;
	system("pause");
	return 0;
}
