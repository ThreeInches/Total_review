#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strncpy  ´Ósource¿½±´num¸ö×Ö·ûµ½destination
int main5()
{
	char str1[] = "sample string";
	char str2[20] = "\0";
	char str3[40] = "\0";
	strncpy(str2, str1, 7);
	strncpy(str3, "copy successful", 5);
	puts(str1);
	puts(str2);
	puts(str3);
	system("pause");
	return 0;
}