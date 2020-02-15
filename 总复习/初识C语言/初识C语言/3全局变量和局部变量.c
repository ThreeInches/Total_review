#include <stdio.h>

int global = 2020;//全局变量

int main3()
{
	//局部变量和全局变量同名时，局部变量优先使用
	int local = 2020;//局部变量
	int global = 2019;//局部变量
	printf("%d\n", global);
	system("pause");
	return 0;
}