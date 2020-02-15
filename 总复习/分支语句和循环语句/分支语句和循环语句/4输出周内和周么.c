#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main4()
{
	int a;
	printf("请输入一个数字：\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("周内\n");
		break;
	case 6:
	case 7:
		printf("周么\n");
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}