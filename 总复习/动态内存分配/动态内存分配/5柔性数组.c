#include <stdio.h>
#include <stdlib.h>

/*
柔性数组特点：
1、结构体中的柔性数组成员面前至少一个其他成员
2、sizeof返回的这种结构大小不包括柔性数组的内存
3、包含柔性数组成员的结果用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构体的大小，以适应柔性数组的预期大小
*/
typedef struct st_type1
{
	int i;
	int a[0];//柔性数组成员
}type_a1;

typedef struct st_type2
{
	int i;
	int a[];//柔性数组成员
}type_a2;

int main5()
{
	printf("%d\n", sizeof(type_a1));//4
	printf("%d\n", sizeof(type_a2));//4
	system("pause");
	return 0;
}