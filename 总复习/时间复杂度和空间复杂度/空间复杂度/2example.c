//¼ÆËã½×³ËµÄFactorialº¯Êý
#include <stdio.h>
#include <stdlib.h>

int Factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}

int main2()
{
	printf("%d\n", Factorial(10));
	system("pause");
	return 0;
}