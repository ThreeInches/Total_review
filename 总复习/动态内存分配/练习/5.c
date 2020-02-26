#include <stdio.h>
#include <stdlib.h>

//对同一块内存多次释放
void test5()
{
	int *p = (int *)malloc(100);
	free(p);
	free(p);
}

int main5()
{
	test5();
	system("pause");
	return 0;
}