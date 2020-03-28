#include <stdio.h>
#include <stdlib.h>

void GetMemory9(char **p, int num)
{
	*p = (char *)malloc(num);
}

void Test9(void)
{
	char *str = NULL;
	GetMemory9(&str, 100);
	strcpy(str, "Hello,World!");
	puts(str);
}

int main9()
{
	Test9();
	system("pause");
	return 0;
}