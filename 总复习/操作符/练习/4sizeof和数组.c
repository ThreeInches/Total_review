#include <stdio.h>
#include <stdlib.h>

void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}

int main4()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	system("pause");
	return 0;
}