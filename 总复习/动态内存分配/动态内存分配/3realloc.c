#include <stdio.h>
#include <stdlib.h>

/*
realloc
可对动态开辟内存的大小进行调整
1、ptr是要调整的内存地址
2、size调整之后的大小
3、返回值为调整之后的内存起始地址
4、这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间
*/

int main3()
{
	int *ptr = malloc(100);
	if (ptr)
	{

	}
	else
	{
		exit(EXIT_FAILURE);
	}
	//扩展容量
	ptr = realloc(ptr, 1000);

	int *p = NULL;
	p = realloc(ptr, 1000);
	if (p)
	{
		ptr = p;
	}

	free(ptr);
	ptr = NULL;
	system("pause");
	return 0;
}