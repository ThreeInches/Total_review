//计算斐波那契数列的递归Fibonacci
#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return n + Fibonacci(n - 1);
}

int main3()
{
	printf("%d\n", Fibonacci(5));
	system("pause");
	return  0;
}