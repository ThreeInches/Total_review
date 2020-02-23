#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strncmp  比较两个字符前num个字符是否一致   一致返回0，前者大返回正数，后者大返回负数
/*
这个函数开始比较每个字符串的第一个字符。
如果它们彼此相等，则继续执行以下操作，
直到字符不同为止，直到到达一个终止的空字符，
或者直到两个字符串中的num字符匹配为止
(以先发生的情况为准)*/
int main7()
{
	char str[][5] = { "R2D2", "C3PO", "R2A6" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n = 0; n < 3; n++)
	if (strncmp(str[n], "R2xx", 2) == 0)
	{
		printf("found %s\n", str[n]);
	}
	system("pause");
	return 0;
}