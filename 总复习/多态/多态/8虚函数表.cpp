#include <iostream>

using namespace std;

//1、派生类中也有序表指针，一部分是存虚函数，一部分存成员
//2、基类和派生类的序表不一样，虚函数的重写也叫覆盖
//3、虚函数的本质是一个存虚函数指针的指针数组，这个数组最后放的是nullptr
//4、序表存的是虚函数指针，序表存在代码段

//派生类序表生成总结：
//1、基类序表内容拷贝一份到派生类序表中
//2、若是派生类重写了基类虚函数，则派生类自己的虚函数覆盖序表中基类的虚函数
//3、派生类自己新增的虚函数按其在派生类中的声明次序增加到派生类序表的最后

class Base
{
public:
	virtual void Func1()
	{
		cout << "Base::Func1()" << endl;
	}

	virtual void Func2()
	{
		cout << "Base::Func2()" << endl;
	}

	void Func3()
	{
		cout << "Base::Func3()" << endl;
	}
public:
	int m_b = 1;
};

class Derive : public Base
{
public:
	virtual void Func1()
	{
		cout << "Derive::Func1()" << endl;
	}
private:
	int m_d = 2;
};
int main()
{
	Base b;
	Derive d;
	system("pause");
	return 0;
}
