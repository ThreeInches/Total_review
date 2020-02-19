#include <stdio.h>
#include <stdlib.h>

struct Point 
{
	int x;
	int y;
}p1;//声明类型的同时定义变量p1

struct Point p2;//定义结构体变量p2

struct Point p3 = { 2, 3 };//定义今结构体变量p3并赋值

struct Stu 
{
	char name[20];
	int age;
};

struct Stu s = { "zhangsan", 20 };

struct Node 
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, { 4, 5 }, NULL };//结构体嵌套初识化

struct Node n2 = { 20, { 5, 6 }, NULL };

int main2()
{

	system("pause");
	return 0;
}