#include <stdio.h>
#include <stdlib.h>

//对动态开辟空间的越界访问
void test2()
{
	int *p = (int *)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i <= 10; i++)//发生越界错误
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
}

int main2()
{
	test2();
	system("pause");
	return 0;
}