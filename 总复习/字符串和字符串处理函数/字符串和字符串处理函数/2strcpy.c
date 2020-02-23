#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy  将source复制到destination中   destination必须足够大
int main2()
{
	char str1[] = "sample string";
	char str2[20];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	system("pause");
	return 0;
}