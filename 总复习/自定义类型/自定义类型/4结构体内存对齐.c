#include <stdio.h>
#include <stdlib.h>

/*
结构体的对齐规则：
1、第一个成员与结构体变量偏移量为0的地址处。
2、其他成员变量对齐到某个数字（对齐数）的整数倍的地址处
对齐数 = 编译器默认的一个对齐数与该成员大小的较小值  
注：vs默认对齐数为8，Linux的默认对齐数为4
3、结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
4、如果嵌套了结构体，嵌套结构体对齐到自己最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
*/

struct s1
{
	char c1;
	int i;
	char c2;
};

struct s2
{
	char c1;
	char c2;
	int i;
};

struct s3
{
	double d;
	char c;
	int i;
};

struct s4
{
	char c1;
	struct s3 s;
	double d;
};


int main4()
{
	printf("%d\n", sizeof(struct s1));//12
	printf("%d\n", sizeof(struct s2));//8
	printf("%d\n", sizeof(struct s3));//16
	printf("%d\n", sizeof(struct s4));//32
	system("pause");
	return 0;
}