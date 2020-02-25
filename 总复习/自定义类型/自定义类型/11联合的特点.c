#include <stdio.h>
#include <stdlib.h>

union UN
{
	int i;
	char c;
};

int main11()
{
	union UN un;
	printf("%d\n", sizeof(un.i));
	printf("%d\n", sizeof(un.c));

	un.i = 0x11223344;
	un.c = 0x55;
	printf("%d\n", sizeof(un.i));
	system("pause");
	return 0;
}