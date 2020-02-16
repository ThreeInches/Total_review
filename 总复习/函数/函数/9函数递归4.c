#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//递归斐波那契数列
int fib1(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else{
		return fib1(n - 1) + fib1(n - 2);
	}
}

//非递归求斐波那契数列
int fib2(int n)
{
	int l1 = 0;
	int l2 = 1;
	int res = 0;
	if ((n == 0) || (n==1))
	{
		return 1;
	}
	while (n >= 2)
	{
		res = l1 + l2;
		l1 = l2;
		l2 = res;
		n--;
	}
	return res;
}

int main9()
{
	printf("%d\n", fib1(1));
	printf("%d\n", fib1(2));
	printf("%d\n", fib1(3));
	printf("%d\n", fib1(4));
	printf("%d\n", fib1(5));
	printf("%d\n", fib1(6));
	printf("%d\n", fib1(7));
	printf("%d\n", fib1(8));
	printf("%d\n", fib1(9));
	printf("%d\n", fib1(10));

	printf("%d\n", fib2(1));
	printf("%d\n", fib2(2));
	printf("%d\n", fib2(3));
	printf("%d\n", fib2(4));
	printf("%d\n", fib2(5));
	printf("%d\n", fib2(6));
	printf("%d\n", fib2(7));
	printf("%d\n", fib2(8));
	printf("%d\n", fib2(9));
	printf("%d\n", fib2(10));
	system("pause");
	return 0;
}