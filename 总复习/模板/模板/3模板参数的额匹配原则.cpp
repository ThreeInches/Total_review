#include <iostream>

using namespace std;

//一个非模板函数可以和一个同名的函数模板同时存在，而且该函数模板还可以特化为这个非模板函数
//
//专门处理int的加法函数
int Add(const int& left, const int& right)
{
	return left + right;
}

////通用的加法函数
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//void Test1()
//{
//	Add(1, 2);//与非模板函数匹配，编译器不需要特化
//	Add<int>(1, 2);//调用编译器特化的版本
//}

//对于非模板函数和同名函数模板，如果其他条件相同，在调动时优先调用非模板函数，若是模板可以产生一个更具有匹配效果的函数，则选择特化模板

//通用的加法函数
template<class T1, class T2>
T1 Add(const T1& left, const T2& right)
{
	return left + right;
}

void Test2()
{
	Add(1, 2);//不需要特化
	Add(1, 1.2);//模板函数可以生成更好的匹配版本，编译器根据实参生成更加匹配的Add函数
}

//模板函数不允许自动类型转换，但是普通函数可以

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}
