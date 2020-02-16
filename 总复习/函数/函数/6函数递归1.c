#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//接收一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：12345678，输出 1 2 3 4 5 6 7 8.
void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num%10);
}

int main6()
{
	int num = 12345678;
	print(num);
	system("pause");
	return 0;
}