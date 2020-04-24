#include <iostream>

using namespace std;

//协变（基类与派生类虚函数返回值类型不同）
//派生类重写基类虚函数的时候，与基类虚函数返回值类型不同，即基类虚函数返回基类对象的指针或者引用，派生类虚函数返回派生类对象的指针或引用时，称为协变

class A
{

};

class B : public A
{

};

class Person
{
public:
	virtual A* f()
	{
		return new A;
	}
};

class Student : public Person
{
public:
	virtual B* f()
	{
		return new B;
	}
};

int main()
{

	system("pause");
	return 0;
}
