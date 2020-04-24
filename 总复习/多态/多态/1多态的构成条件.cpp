#include <iostream>

using namespace std;

//虚函数：被virtual修饰的类成员函数
//多态指的是不同的继承关系的类对象，去调用同一函数，产生了不同行为；

//构成多态的两个条件
//1、必须通过基类的指针或者引用调用虚函数
//2、被调用的函数必须是虚函数，且派生类必须对基类的虚函数进行重写

class Person
{
public:
	virtual void doSomething()
	{
		cout << "Person" << endl;
	}
};

class Student : public Person
{
	virtual void doSomething()
	{
		cout << "Student" << endl;
	}
};

void Func(Person& people)
{
	people.doSomething();
}

int main()
{
	Person zhangsan;
	Func(zhangsan);

	Student lisi;
	Func(lisi);
	system("pause");
	return 0;
}
