#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//Ç¶Ì×µ÷ÓÃ
void new_line()
{
	printf("Hello World!\n");
}

void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}

int main3()
{
	three_line();
	system("pause");
	return 0;
}
