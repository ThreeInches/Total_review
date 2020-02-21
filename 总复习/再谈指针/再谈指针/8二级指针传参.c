#include <stdio.h>
#include <stdlib.h>

void test11(int  **ptr)
{
	printf("num = %d\n", **ptr);
}

void test22(char **p)
{
	printf("%c\n", **p);
}

int main8()
{
	int n = 10;
	int *p = &n;
	int **pp = &p;
	test11(pp);
	test11(&p);

	char c = 'b';
	char *pc = &c;
	char **ppc = &pc;
	char *arr[10];
	test22(&pc);
	test22(ppc);
	test22(arr);//´íÎó
	system("pause");
	return 0;
}