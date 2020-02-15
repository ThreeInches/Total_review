#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:\n");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;

	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#else
int Add(int x, int y)
{
	return x + y;
}

int main9()
{
	int x, y;
	int sum = 0;
	printf("输入两个操作数:\n");
	scanf("%d %d", &x, &y);

	sum = Add(x, y);

	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#endif