#include "Stack.h"

//初始化
void StackInit(Stack *pstack, size_t capacity)
{
	assert(pstack);
	pstack->_capacity = capacity;
	pstack->_array = (StackDataType *)malloc(capacity*sizeof(StackDataType));
	assert(pstack->_array);
	pstack->_size = 0;
}

//销毁
void StackDestory(Stack *pstack)
{
	assert(pstack);
	if (pstack->_array)
	{
		free(pstack->_array);
		pstack->_array = NULL;
		pstack->_size = 0;
		pstack->_capacity = 0;
	}
}

//扩容
void CheckCapacity(Stack *pstack)
{
	assert(pstack);
	if (pstack->_size == pstack->_capacity)
	{
		pstack->_capacity *= CAPACITY;
		pstack->_array = (StackDataType *)realloc(pstack->_size, pstack->_capacity*sizeof(StackDataType));
	}
}

//压栈
void StackPush(Stack *pstack, StackDataType x)
{
	assert(pstack);
	CheckCapacity(pstack);
	pstack->_array[pstack->_size] = x;
	pstack->_size++;
}

//弹出
void StackPop(Stack *pstack)
{
	assert(pstack || pstack->_size);
	pstack->_size--;
}

//返回栈顶元素
StackDataType StackTop(Stack *pstack)
{
	assert(pstack);
	if (pstack->_array)
	{
		return pstack->_array[pstack->_size - 1];
	}
	return -1;
}

//返回栈的大小
int StackSize(Stack *pstack)
{
	assert(pstack);
	assert(pstack);
	if (pstack->_array)
	{
		return pstack->_size;
	}
	return -1;
}

//判空
int StackEmpty(Stack *pstack)
{
	assert(pstack);
	if (StackSize(pstack) == -1)
	{
		return 1;
	}
	return -1;
}

//打印
void StackPrint(Stack *pstack)
{
	assert(pstack);
	for (int i = 0; i < pstack->_size; i++)
	{
		printf("%d--", pstack->_array[i]);
	}
	printf("Top\n");
}