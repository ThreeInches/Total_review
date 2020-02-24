#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//将source位置开始向后复制num个字节得到数据到destination中。
//memmove和memcpy的区别是memmove处理源内存块和目标内存块的时候可以重叠
int main13()
{
	char str[] = "memmove can be very useful……";
	memmove(str + 20, str + 15, 11);
	puts(str);
	system("pause");
	return 0;
}