#ifndef _STACK_H_
#define _STACK_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int StackDataType;

typedef struct Stack
{
	StackDataType *_array;
	size_t _size;
	size_t _capacity;
}Stack;

//初始化
void StackInit(Stack *pstack, size_t capacity);
//销毁
void StackDestory(Stack *pstack);
//扩容
void CheckCapacity(Stack *pstack);
//压栈
void StackPush(Stack *pstack, StackDataType x);
//弹出
void StackPop(Stack *pstack);
//返回栈顶元素
StackDataType StackTop(Stack *pstack);
//返回栈的大小
int StackSize(Stack *pstack);
//判空
int StackEmpty(Stack *pstack);
//打印
void StackPrint(Stack *pstack);
#endif //_STACK_H_