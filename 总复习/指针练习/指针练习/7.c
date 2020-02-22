#include <stdio.h>
#include <stdlib.h>

int main7()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int*)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
	system("pause");
	return 0;
}