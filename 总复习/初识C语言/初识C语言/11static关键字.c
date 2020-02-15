#include <stdio.h>
#include <stdlib.h>


//static是用来修饰变量和函数的
//1、修饰局部变量
#if 0
void test()
{
	int i = 0;
	i++;
	printf("%d ", i);
}

int main11()
{
	for (int i = 0; i < 10; i++)
	{
		test();
	}
	system("pause");
	return 0;
}
#else
void test()
{
	static int i = 0;
	i++;
	printf("%d ", i);
}

int main11()
{
	for (int i = 0; i < 10; i++)
	{
		test();
	}
	system("pause");
	return 0;
}
#endif
//2、修饰全局变量
#if 0
int g_val = 2020;

int main11()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}
#else
static int g_val = 2020;

int main11()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}
#endif

//3、修饰函数
#if 0
int Add(int x, int y)
{
	return x + y;
}

int main11()
{
	printf("%d\n", add(2, 3));
	system("pause");
	return 0;
}
#else
static int Add(int x, int y)
{
	return x + y;
}

int main11()
{
	printf("%d\n", add(2, 3));
	system("pause");
	return 0;
}
#endif