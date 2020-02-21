#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#if 0
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div1(int x, int y)
{
	return x / y;
}

int main()
{
	int x, y;
	int res;
	int input = 1;
	while (input)
	{
		printf("#####################\n");
		printf("#######1、 add#######\n");
		printf("#######2、 sub#######\n");
		printf("#######3、 mul#######\n");
		printf("#######4、 div#######\n");
		printf("#####################\n");
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个数字:");
			scanf("%d %d", &x, &y);
			res = add(x, y);
			break;
		case 2:
			printf("请输入两个数字:");
			scanf("%d %d", &x, &y);
			res = sub(x, y);
			break;
		case 3:
			printf("请输入两个数字:");
			scanf("%d %d", &x, &y);
			res = mul(x, y);
			break;
		case 4:
			printf("请输入两个数字:");
			scanf("%d %d", &x, &y);
			res = div1(x, y);
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
		printf("res = %d\n", res);
	}
	system("pause");
	return 0;
}
#endif

#if 0

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div1(int x, int y)
{
	return x / y;
}

int main()
{
	int x, y;
	int input = 1;
	int res = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, div1 };//转移表
	while (input)
	{
		printf("#####################\n");
		printf("#######1、 add#######\n");
		printf("#######2、 sub#######\n");
		printf("#######3、 mul#######\n");
		printf("#######4、 div#######\n");
		printf("#####################\n");
		printf("请输入：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			res = ((*p[input])(x, y));
		}
		else
		{
			printf("选择错误，请重新选择！");
		}
		printf("res = %d\n", res);
	}
	system("pause");
	return 0;
}

#endif