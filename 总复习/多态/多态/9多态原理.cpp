#include <iostream>

using namespace std;

//不同对象完成同一行为时候会展现出多态
//要实现多态，就要实现虚函数的覆盖和对象的指针或引用调用虚函数

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
public:
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
	Person per;
	Func(per);

	Student stu;
	Func(stu);
	system("pause");
	return 0;
}
