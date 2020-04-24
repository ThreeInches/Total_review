#include <iostream>

using namespace std;

//虚函数的重写（覆盖）：派生类只有一个跟着基类完全相同的虚函数（即派生类虚函数与基类虚函数的返回值类型、函数名字、参数列表 完全相同）称为派生类的虚函数重写了基类的虚函数

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
	//注：
	//虚函数的重写，派生类可以不加virtual关键字，虽然也可以构成重写关系，但是继承后基类的虚函数被继承下来了在派生类依旧保持虚函数属性，但是写法不规范
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
