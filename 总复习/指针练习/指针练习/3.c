#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Test
{
	int num;
	char *pcName;
	short sDate;
	char ch[2];
	short sDa[4];
}*p;

int main3()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	system("pause");
	return 0;
}