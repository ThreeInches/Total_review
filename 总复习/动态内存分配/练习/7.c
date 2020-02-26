#include <stdio.h>
#include <stdlib.h>

void GetMemory7(char *p)
{
	p = (char *)malloc(10);
}

void Test7(void)
{
	char *str = NULL;
	GetMemory7(str);
	strcpy(str, "Hello,World!");
	puts(str);
}

int main7()
{
	Test7();
	system("pause");
	return 0;
}