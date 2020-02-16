#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//递归求n的阶乘
int factorial1(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial1(n - 1);
	}
}

//非递归求n的阶乘
int factorial2(int n)
{
	int res = 1;
	while (n > 1)
	{
		res *= n;
		n--;
	}
	return res;
}

int main8()
{
	printf("%d\n", factorial1(5));
	printf("%d\n", factorial2(5));
	system("pause");
	return 0;
}