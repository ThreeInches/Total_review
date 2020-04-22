#include <iostream>
#include <string>

using namespace std;

//1、派生类的构造函数必须调用基类的构造函数初始化基类的那部分成员，若是基类没有默认的构造函数，则必须在派生类构造函数的初始化列表阶段显示调用
//2、派生类的拷贝构造函数必须调用基类的拷贝构造完成基类的拷贝初始化
//3、派生类的operator=必须要调用基类的operator=完成基类的复制
//4、派生类的析构函数会在被调用完成后自动调用基类的析构函数完成基类成员的清理，从而保证派生类对象先清理，基类成员后清理
//5、派生类对象初始化先调用基类构造再调派生类构造
//6、派生类对象析构清理先调用派生类析构在调用基类析构

class Person
{
public:
	Person(const char* name = "zhangsan")
		:m_name(name)
	{
		cout << "Person(const char* name = ""zhangsan"")" << endl;
	}

	Person(const Person& p)
		:m_name(p.m_name)
	{
		cout << "Person(const Person& p)" << endl;
	}

	Person& operator = (const Person& p)
	{
		cout << "Person& operator = (const Person& p)" << endl;

		if (this != &p)
		{
			m_name = p.m_name;
		}
		return *this;
	}

	~Person()
	{
		cout << "~Person()" << endl;
	}

protected:
	string m_name;
};

class Student : public Person
{
public:
	Student(const char* name, int num)
		:Person(name)
		, m_num(num)
	{
		cout << "Student(const char* name, int num)" << endl;
	}

	Student(const Student& s)
		:Person(s)
		, m_num(s.m_num)
	{
		cout << "Student(const Student& s)" << endl;
	}

	Student& operator = (const Student& s)
	{
		cout << "Student& operator = (const Student& s)" << endl;

		if (this != &s)
		{
			Person::operator=(s);
			m_num = s.m_num;
		}

		return *this;
	}

	~Student()
	{
		cout << "~Student()" << endl;
	}

protected:
	int m_num;
};

int main()
{
	Student s1("lisi", 18);
	Student s2(s1);
	Student s3("wanglaowu", 19);
	s1 = s3;
	system("pause");
	return 0;
}
