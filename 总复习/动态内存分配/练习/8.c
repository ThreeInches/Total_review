#include <stdio.h>
#include <stdlib.h>

char* GetMemory8(void)
{
	char p[] = "Hello,World!";
	return p;
}

void Test8(void)
{
	char *str = NULL;
	str = GetMemory8();
	puts(str);
}

int main8()
{
	Test8();
	system("pause");
	return 0;
}