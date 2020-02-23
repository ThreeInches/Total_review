#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strncat  从source中追加num个字符到destination
int main6()
{
	char str1[20] = "\0";
	char str2[20] = "\0";
	strcat(str1, "abcdef");
	strcat(str2, "abc");
	strncat(str1, str2, 2);
	puts(str1);
	system("pause");
	return 0;
}