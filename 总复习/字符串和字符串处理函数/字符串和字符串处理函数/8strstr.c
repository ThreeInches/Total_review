#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//查找子字符串 
//返回一个指向str1中第一次出现的str2的指针，如果str2不是str1的一部分，则返回一个空指针。
//匹配过程不包括终止的空字符，但它就到此为止。
int main8()
{
	char str1[] = "This is a simple string";
	char *pstr;
	pstr = strstr(str1, "simple");
	strncpy(pstr, "simple", 6);
	puts(str1);
	system("pause");
	return 0;
}