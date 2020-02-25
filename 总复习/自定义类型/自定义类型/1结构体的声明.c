#include <stdio.h>
#include <stdlib.h>

//结构体是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量。
//一般声明
struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[20];
};

//特殊声明
//匿名结构体类型,下面两个结构体的声明的时候省略掉了结构体标签（tag）
struct
{
	int a;
	char b;
	float c;
}x;

struct
{
	int a;
	char b;
	float c;
}a[20], *p;

int main1()
{
	p = &x;
	system("pause");
	return 0;
}