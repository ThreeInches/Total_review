#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char *destination, const char *source)
{
	char *res = destination;
	assert(destination != NULL);
	assert(source != NULL);
	while ((*destination++ = *source++))
	{
		;
	}
	return res;
}

int main2()
{
	char str1[] = "sample string";
	char str2[20];
	char str3[40];
	my_strcpy(str2, str1);
	my_strcpy(str3, "copy successful");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	system("pause");
	return 0;
}