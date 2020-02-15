#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main1()
{
	int res = 1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	printf("%d! = %d", n, res);
	system("pause");
	return 0;
}