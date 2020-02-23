#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//计算字符串长度，不包含\0  返回无符号整形
int main1()
{
	const char *str1 = "abcdef";
	const char *str2 = "abc";
	if (strlen(str1) > strlen(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	system("pause");
	return 0;
}