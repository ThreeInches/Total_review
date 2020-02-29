#include <stdio.h>
#include <stdlib.h>

int main2()
{
	extern void Print(char *str);
	extern int g_val;
	printf("%d\n", g_val);
	Print("Hello,World!");
	system("pause");
	return 0;
}