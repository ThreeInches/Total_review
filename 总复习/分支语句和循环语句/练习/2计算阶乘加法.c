#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main2()
{
	int res = 1;
	int sum = 0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		res *= i;
		sum += res;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}