#include <stdio.h>
#include <stdlib.h>

int main1()
{
	int a = 10;
	int b = 20;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d %d", a, b);
	system("pause");
	return 0;
}