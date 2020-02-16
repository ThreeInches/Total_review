#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main4()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));
	printf("%d\n", ret);
	system("pause");
	return 0;
}