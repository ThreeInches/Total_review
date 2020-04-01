#include <iostream>

using namespace std;

//隐式实例化：让编译器根据实参类型自己推演模板参数的实际类型
template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

void Test1()
{
	int a = 10;
	int b = 20;
	double c = 10.5;
	double d = 20.8;

	cout << Add(a, b) << endl;
	cout << Add(c, d) << endl;

	//用户强制转化
	cout << Add(a, (int)c) << endl;
}

//显示实例化：在函数名后的<>中指定模板参数实际类型
void Test2()
{
	int a = 10;
	int b = 20;
	double c = 10.5;
	double d = 20.8;

	cout << Add<int>(a, b) << endl;
	cout << Add<double>(c, d) << endl;

	//用户强制转化
	cout << Add<int>(a, c) << endl;
}
int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}
