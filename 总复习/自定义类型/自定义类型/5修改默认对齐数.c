#include <stdio.h>
#include <stdlib.h>

//修改默认对齐数为8
#pragma pack(8)

struct s1
{
	char c1;
	int i;
	char c2;
};

//取消设置默认对齐数，还原为默认
#pragma pack()


//修改默认对齐数为1
#pragma pack(1)

struct s2
{
	char c;
	int i;
	char c2;
};

//取消设置默认对齐数，还原为默认
#pragma pack()

int main5()
{
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	system("pause");
	return 0;
}