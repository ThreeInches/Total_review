#include <stdio.h>
#include <stdlib.h>

//##可以把它两端的符号合成一个符号，它允许宏定义从分离的文本片段创建标识符
#define CONS(a,b)  int(a##e##b)


int main7()
{
	//printf("%d\n", CONS(2, 3));
	system("pause");
	return 0;
}