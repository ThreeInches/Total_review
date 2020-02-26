#include <stdio.h>
#include <stdlib.h>

/*
calloc
1、为num个大小为size的元素开辟一块空间，并把空间每个字节初始化为0
2、calloc在返回地址之前会把申请的空间的每个字节置零
*/

int main2()
{
	int *p = calloc(10, sizeof(int));
	if (p)
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 0;
		}
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}