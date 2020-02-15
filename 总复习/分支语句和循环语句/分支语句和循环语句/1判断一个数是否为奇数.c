#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main1()
{
	int a;
	printf("请输入一个数字：\n");
	scanf("%d", &a);
	int flag = a % 2;
	if (flag)
	{
		printf("是奇数\n");
	}
	else
	{
		printf("是偶数\n");
	}
	system("pause");
	return 0;
}