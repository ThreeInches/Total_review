#include <iostream>

using namespace std;

//override修饰的虚函数用来检查派生类虚函数是否重写了基类的某个虚函数，若是没有重写，编译报错
class Car
{
public:
	virtual void Drive()
	{
		cout << "Car" << endl;
	}
};

class Benz : public Car
{
public:
	virtual void Drive() override
	{
		cout << "Benz" << endl;
	}
};

int main()
{

	system("pause");
	return 0;
}
