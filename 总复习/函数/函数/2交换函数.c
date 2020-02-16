#include <stdio.h>
#include <stdlib.h>

void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int *px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main2()
{
	int num1 = 1;
	int num2 = 2;
	Swap1(num1, num2);
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
	system("pause");
	return 0;
}