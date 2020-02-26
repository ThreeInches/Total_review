#include <stdio.h>
#include <stdlib.h>

//使用free释放一块动态开辟内存的一部分
void test4()
{
	int *p = (int *)malloc(100);
	p++;
	free(p);
}

int main4()
{
	test4();
	system("pause");
	return 0;
}