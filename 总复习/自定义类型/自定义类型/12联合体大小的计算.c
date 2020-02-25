#include <stdio.h>
#include <stdlib.h>

union UN1
{
	char c[5];
	int i;
};

union UN2
{
	short s[7];
	int i;
};

int main12()
{
	union UN1 un1;
	union UN2 un2;
	printf("%d\n", sizeof(un1));//8
	printf("%d\n", sizeof(un2));//16
	system("pause");
	return 0;
}