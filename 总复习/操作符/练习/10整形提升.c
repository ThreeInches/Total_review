#include <stdio.h>
#include <stdlib.h>

int main10()
{
	//a，b，要整形提升，但是c不需要整形提升，表达式a == 0xb6和a == 0xb600值为假，所以输出c
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
	{
		printf("a");
	}
	if (b == 0xb600)
	{
		printf("b");
	}
	if (c == 0xb6000000)
	{
		printf("c");
	}

	system("pause");
	return 0;
}

int main10()
{
	char c = 1;
	//c只要参与运算就会发生整形提升，表达式+c就会发生整形提升。
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	system("pause");
	return 0;
}