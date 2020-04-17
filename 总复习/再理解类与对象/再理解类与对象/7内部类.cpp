#include <iostream>

using namespace std;

//内部类概念
//如果一个类在另外一个类的内部，这个内部类就叫做内部类
//
//注
//1、内部类是外部类的友元类
//2、内部类可以定义在外部类的public，protected，private都可以
//3、内部类可以访问外部类的static、枚举成员、不需要外部类的对象/类名
//4、sizeof(外部类) = 外部类,和内部类没有任何关系

class A
{
public:
	A(int h)
	{
		_h = h;
	}
	class B
	{
	public:
		void foo(const A& a)
		{
			cout << _k << endl;
			cout << a._h << endl;
		}
	};
private:
	static int _k;
	int _h;
};

int A::_k = 0;

int main()
{
	A::B b;
	b.foo(A(10));
	system("pause");
	return 0;
}
