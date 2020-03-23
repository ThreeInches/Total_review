#include <iostream>
using namespace std;

//引用不是新定义一个变量，而是给已经存在的变量起别名，编译器不会为引用变量开辟内存空间，它和它引用的变量共用同一块内存空间
//eg:类型& 引用变量名 = 引用实体

void Test6()
{
	int a = 10;
	int& aa = a;
	printf("%p\n", &a);
	printf("%p\n", &aa);
}

//引用特性
//1、引用用在定义时必须初始化
//2、一个变量可以有多个引用
//3、引用一旦引用一个实体，再不能引用其他实体

void TestRef()
{
	int b = 20;
	//int& ra;
	int& ra = b;
	int& rra = b;
	printf("%p %p %p", &b, &ra, &rra);
}

//常引用
void TestConstRef()
{
	const int a = 10;
	//int& ra = a;  a为常量
	const int& ra = a;
	//int& b = 10;  b为常量
	const int& b = 10;
	double d = 3.14;
	//int&rd = d;  类型不同
	const int& rd = d;
}

//使用场景
//1、做参数

//2、做返回值


int main()
{
	Test6();
	TestRef();
	system("pause");
	return 0;
}
