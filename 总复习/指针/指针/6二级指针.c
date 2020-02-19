#include <stdio.h>
#include <stdlib.h>

int main6()
{
	int a = 20;
	int *pa = &a;
	int **ppa = &pa;
	*ppa = &a;//等价于	pa = &b;
	*ppa = 30;
	//等价于 *pa = 30；
	//等价于 a = 30；
	system("pause");
	return 0;
}