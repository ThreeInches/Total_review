#include <stdio.h>
#include <stdlib.h>

//结构体中包含一个类型为该结构体本身的成员
struct Node
{
	int data;
	struct Node *next;
};

//typedef struct Node
//{
//	int data;
//	struct Node *next;
//}Node;

int main2()
{

	system("pause");
	return 0;
}