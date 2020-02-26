#include <stdio.h>
#include <stdlib.h>

//对非动态开辟内存使用free释放
void test3()
{
	int a = 10;
	int *p = &a;
	free(p);
}

int main3()
{
	test3();
	system("pause");
	return 0;
}