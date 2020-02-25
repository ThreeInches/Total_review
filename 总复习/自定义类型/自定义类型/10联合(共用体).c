#include <stdio.h>
#include <stdlib.h>

//联合体变量声明
union Un
{
	char c;
	int i;
};

int main10()
{
	//联合体的定义
	union Un un;
	printf("%d\n", sizeof(un));
	system("pause");
	return 0;
}