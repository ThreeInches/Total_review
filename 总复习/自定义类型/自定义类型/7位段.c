#include <stdio.h>
#include <stdlib.h>

//1、位段的成员必须是int、unsigned int或signed int
//2、位移的成员名后边有一个冒号和一个数字。
//3、与结构体类似。

struct A
{
	int a : 2;//位段a占2位
	int b : 5;//位段b占5位
	int c : 10;//位段c占10位
	int d : 30;//位段d占30位
};

int main7()
{
	printf("%d\n", sizeof(struct A));
	system("pause");
	return 0;
}