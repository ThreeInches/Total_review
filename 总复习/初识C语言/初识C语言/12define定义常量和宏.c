#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define ADD(x, y) ((x) + (y))

int main12()
{
	printf("%d\n", ADD(2, 3));
	printf("%d\n", 10 * ADD(2, 3));
	system("pause");
	return 0;
}