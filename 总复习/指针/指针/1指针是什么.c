#include <stdio.h>
#include <stdlib.h>

int main1()
{
	int a = 10;//在内存中为a申请一片空间
	int *p = &a;//通过&取地址操作符得到a的地址，并赋值给指针p
	system("pause");
	return 0;
}