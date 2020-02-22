#include <stdio.h>
#include <stdlib.h>

int main9()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FRIST" };
	char **pc[] = { c + 3, c + 2, c + 2 };
	char ***ppc = pc;
	printf("%s\n", **++ppc);//POINT
	printf("%s\n", *--*++ppc + 3);//
	printf("%s\n", *ppc[-2] + 3);//ST
	printf("%s\n", ppc[-1][-1] + 1);//EW
	system("pause");
	return 0;
}