#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
malloc函数是向内存申请一块连续可用的空间，并返回这块空间的指针
1、开辟成功，返回指向开辟好空间的指针
2、开辟失败，返回NULL，malloc的返回值要做检查
3、malloc在开辟空间的时候，开辟的空间类型由使用者决定
4、malloc的size为0，是未定义，取决于编译器
*/

/*
free函数用来释放动态开辟的内存
1、若是ptr指向的空间不是动态开辟的，那么free函数的行为是未定义的
2、若是ptr为NULL，则函数什么事都不做。
*/

int main1()
{
	int num = 0;
	scanf("%d", &num);
	int arr;

	int *ptr = NULL;
	ptr = (int *)malloc(num*sizeof(int));
	if (ptr)
	{
		for (int i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);
	ptr = NULL;
	system("pause");
	return 0;
}