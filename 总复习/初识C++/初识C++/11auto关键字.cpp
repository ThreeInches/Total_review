#include <iostream>
#include <typeinfo>
using namespace std;

//auto作为一个新的类型指示符来指示编译器，auto声明的变量必须有编译器在编译时推到得到
//注：
//使用auto时必须对变量进行初始化，在编译阶段编译器需要根据初始化表达式来推导auto的实际类型。
//auto是一个类型声明时的“占位符”，编译器在编译期会将auto替换为变量实际的类型。

double testauto()
{
	return 10.0;
}

//auto的使用
//1、auto与指针和引用结合使用
//用auto声明指针类型时，用auto和auto*没有区别，在auto在声明引用的时候必须加&
void testauto1()
{
	int a = 10;
	auto b = &a;
	auto* c = &a;
	auto& d = a;

	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
}

//2、在同一行定义多个变量
//当在同一行声明多个变量，这些变量必须是相同的类型，否则编译器将会报错，因为编译器支队第一个变量进行推导。
void testauto2()
{
	auto a = 1, b = 2;
	//auto c = 1.2, d = 4;
}

//auto不能推导的场景
//1、auto不能作为函数参数
//2、auto不能直接用来声明数组
//3、auto在c++11只能作为类型指示符
//4、auto实际常见用法就是范围for和lambda表达式配合使用
//5、auto不能定义类的非静态成员变量
//6、实例化模板不能使用auto作为模板参数

int main()
{
	int a = 10;
	auto b = a;
	auto c = 'a';
	auto d = testauto();

	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;

	system("pause");
	return 0;
}
