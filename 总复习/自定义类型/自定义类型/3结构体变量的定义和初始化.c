#include <stdint.h>
#include <stdlib.h>

struct Point
{
	int x;
	int y;
}p1;		//声明类型的同时定义变量p1

//赋初值
struct Point p3 = { 2, 3 };

struct Student		//类型声明
{
	char name[15];
	int age;
};

struct Student s = { "zhangsan", 20 };//初始化


struct Node3		//结构体嵌套初始化
{
	int data;
	struct Point p;
	struct Node *next;
}n1 = { 10, { 4, 5 }, NULL };

struct Node3 n2 = { 20, { 5, 6 }, NULL };//结构体嵌套初始化

int main3()
{

	system("pause");
	return 0;
}