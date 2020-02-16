#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//函数递归实现求字符串长度
int Strlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + Strlen(str + 1);
	}
}

int main7()
{
	char* pstr1 = "abcdef";
	int len = Strlen(pstr1);
	printf("%d", len);
	system("pause");
	return 0;
}