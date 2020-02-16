#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int add1(int num)
{
	return ++num;
}

int main4()
{
	int num = 10;
	num = add1(num);
	printf("%d\n", num);
	system("pause");
	return 0;
}