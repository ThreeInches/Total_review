#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isLeap(int* n)
{
	if ((*n % 100 != 0 && *n % 4 == 0) || *n % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main2() {
	int n;
	printf("请输入一个年份：\n");
	scanf("%d", &n);
	if (isLeap(&n))
	{
		printf("%d是闰年！\n", n);
	}
	else
	{
		printf("%d是平年！\n", n);
	}
	system("pause");
	return 0;
}