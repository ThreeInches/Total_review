#include <stdio.h>
#include <stdlib.h>

int get_max(int x, int y)
{
	return (x > y) ? (x) : (y);
}

int main1()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("%d\n", max);
	system("pause");
	return 0;
}