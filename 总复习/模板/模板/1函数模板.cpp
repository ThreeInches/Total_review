#include <iostream>

using namespace std;

//函数模板
//函数模板代表一个函数家族，该函数模板与类型无关，在使用时被参数化，根据实参类型产生函数的特定类型版本

//函数模板格式
//template<typename T1, typename T2, …, typename Tn>
//返回值类型 函数名（参数列表）{}

template <typename T>
void Swap(T& left, T& right)
{
	T tmp = left;
	left = right;
	right = tmp;
}
//typename是用来定义类模板参数的关键字，可以用class代替

int main()
{
	char a = '0';
	char b = '9';
	Swap(a, b);
	cout << a << endl;
	cout << b << endl;

	int c = 10;
	int d = 20;
	Swap(c, d);
	cout << c << endl;
	cout << d << endl;

	double e = 2.1;
	double f = 3.2;
	Swap(e, f);
	cout << e << endl;
	cout << f << endl;

	system("pause");
	return 0;
}
