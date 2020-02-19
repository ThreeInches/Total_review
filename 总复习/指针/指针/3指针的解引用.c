#include <stdio.h>
#include <stdlib.h>

int main3()
{
	//指针的类型决定了指针解引用的时候可以操作的权限。char*指针解引用就只能访问一个字节，int*解引用可以访问四个字节。
	int n = 0x11223344;
	char *pc = (char*)&n;
	char *pi = &n;
	*pc = 0x55;
	*pi = 0;
	system("pause");
	return 0;
}