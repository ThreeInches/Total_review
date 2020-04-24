#include <iostream>

using namespace std;

//抽象类：在虚函数后面写上 "= 0"，则这个函数为纯虚函数，包含纯虚函数的类叫做抽象类
//抽象类不能实例化出对象,只有重写后的纯虚函数才能实例化出对象
//纯虚函数规范了派生类必须重写，纯虚函数更体现出了接口继承

class Car
{
public:
	virtual void Drive() = 0;
};

class Benz : public Car
{
	virtual void Drive()
	{
		cout << "Benz" << endl;
	}
};

class BMW : public Car
{
	virtual void Drive()
	{
		cout << "BMW" << endl;
	}
};

int main()
{
	Car* pBenz = new Benz;
	pBenz->Drive();

	Car* pBMW = new BMW;
	pBMW->Drive();
	system("pause");
	return 0;
}
