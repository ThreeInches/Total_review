#include <iostream>

//1、普通命名空间
namespace N1 //N1为命名空间的名称
{
	//命名空间中的内容，既可以定义变量，也可以定义函数
	int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}

//2、命名空间的嵌套使用
namespace N2
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N3
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}

//3、同一个工程允许出现多个相同名称的命名空间(编译器最后会合并到同一个命名空间中)
namespace N1
{
	int Mul(int left, int right)
	{
		return left * right;
	}
}
//一个命名空间就定义了一个新的作用域，命名空间中所有的内容都会局限于该命名空间中

//命名空间的三种使用方式
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return left + right;
	}
	int Mul(int left, int right)
	{
		return left * right;
	}
}
//1、加命名空间名称及作用域限定符
int main1()
{
	printf("%d\n", N::a);
	system("pause");
	return 0;
}
//2使用using将命名空间中成员引入
using N::b;
int main2()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	system("pause");
	return 0;
}
//3、使用using namespace 命名空间名称引入
using namespace N;
int main3()
{
	printf("%d\n", a);
	printf("%d\n", b);
	system("pause");
	return 0;
}