#include <iostream>

using namespace std;

//public继承是一种is-a的关系，每个派生类都有一个基类对象
//组合是一种has-a的关系，若是b组合了a 则b对象都有一个a对象
//优先使用组合，其次考虑继承
//继承允许根据基类的实现来定义派生类的实现，这种通过生成派生类的复用通常称为白箱复用，耦合度高
//对象的组合要求被组合的对象具有良好定义的接口，这种复用称为黑箱复用 耦合度低

//Car和BMW构成的is-a关系
class Car
{
protected:
	string m_colour = "red";
	string m_num = "陕A250S13";
};

class BMW : public Car
{
public:
	void Drive()
	{
		cout << "Drive()" << endl;
	}
};

//Tire和Car构成的has-a关系
class Tire
{
protected:
	string m_brand = "naike";
	size_t m_size = 17;
};

class Car
{
protected:
	string m_colour = "red";
	string m_num = "陕A250S13";
	Tire m_t;
};

int main()
{

	system("pause");
	return 0;
}
