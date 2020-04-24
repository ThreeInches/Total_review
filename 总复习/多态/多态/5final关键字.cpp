#include <iostream>

using namespace std;

//final修饰的虚函数不能再被继承

class Car
{
public:
	virtual void Drive() final
	{
		cout << "Car" << endl;
	}
};

class Benz : public Car
{
public:
	virtual void Drive()
	{
		cout << "Benz" << endl;
	}
};

int main()
{

	system("pause");
	return 0;
}
