#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//转换的可视性差，难以追踪错误

int main()
{
	int i = 1;
	double d = 1;//隐式类型转换
	printf("%d %.2f\n", i, d);

	int* p = &i;
	int address = (int)p;//显示类型转换
	printf("%x %d\n", p, address);
	system("pause");
	return 0;
}
