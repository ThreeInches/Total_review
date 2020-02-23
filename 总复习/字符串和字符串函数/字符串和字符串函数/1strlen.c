#include <stdio.h>
#include <stdlib.h>

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