#include <stdio.h>
#include <stdlib.h>

//宏的优点
//1、运行速度快
//2、宏与参数类型无关
//宏的缺点
//1、宏过大的时候会增加代码长度
//2、宏没有办法调试
//3、宏没有参数类型，不够严谨
//4、宏会带来优先级问题，导致程序出错

//宏可以做到函数做不到的事情，例如：宏的参数可以是类型

#define MAX(a, b) ((a)>(b)?a:b)

#define MALLOC(num, type)\
	(type *)malloc(num * sizeof(type))

int main8()
{
	printf("max = %d\n", MAX(2, 3));
	MALLOC(10, int);//替换为(int *)malloc(10 * sizeof(int));
	system("pause");
	return 0;
}