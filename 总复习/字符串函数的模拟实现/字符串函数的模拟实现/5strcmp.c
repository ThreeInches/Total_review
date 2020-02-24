#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char *destination, const char *source)
{
	int res = 0;
	assert(destination);
	assert(source);
	while (!(res = *(unsigned char *)destination - *(unsigned char *)source) && *source)
	{
		destination++;
		source++;
	}
	if (res < 0)
	{
		res = -1;
	}
	else if (res > 0)
	{
		res = 1;
	}
	return res;
}

int main5()
{
	const char *str1 = "abcde";
	const char *str2 = "abcd";
	if (my_strcmp(str1, str2) == 0)
	{
		printf("str1 == str2\n");
	}
	else if (my_strcmp(str1, str2) >= 0)
	{
		printf("str1 >= str2\n");
	}
	else
	{
		printf("str1 <= str2\n");
	}
	system("pause");
	return 0;
}