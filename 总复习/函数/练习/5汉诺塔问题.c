#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//汉诺塔问题
void hannuota(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%d:%c-->%c\n", n, a, c);
	}
	else
	{
		hannuota(n - 1, a, c, b);
		printf("%d:%c-->%c\n", n, a, c);
		hannuota(n - 1, b, a, c);
	}
}

int main5()
{
	int n;
	char a = 'a';
	char b = 'b';
	char c = 'c';
	printf("请输入盘子个数：");
	scanf("%d", &n);
	hannuota(n, a, b, c);
	system("pause");
	return 0;
}