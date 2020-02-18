#include <stdio.h>
#include <stdlib.h>

int main8()
{
	int a = 1;
	int b = 2;
	//逗号表达式从左向右依次执行，整个表达式的结果就是最后一个表达式的结果。
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	system("pause");
	return 0;
}