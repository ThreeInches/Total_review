#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	printf("输入两个操作数：\n");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}