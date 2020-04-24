#include <iostream>

using namespace std;

//析构函数的重写
//若是基类的析构函数为虚函数，此时派生类析构函数只要定义，无论是否加virtual关键字，都与基类的虚构函数构成重写，虽然基类与派生类析构函数名字不同，虽然函数名不同，但是这里可以理解为编译后析构函数名称统一处理为destructor

class Person
{
public:
	virtual ~Person()
	{
		cout << "~Person()" << endl;
	}
};

class Student : public Person
{
public:
	virtual ~Student()
	{
		cout << "~Student()" << endl;
	}
};

//只有派生类的析构函数重写了基类的析构函数，此时delete对象调用析构函数才可以构成多态，才能保证指针指向的对象正确调用析构函数

int main()
{
	Person* per = new Person;
	Student* stu = new Student;

	delete per;
	delete stu;
	system("pause");
	return 0;
}
