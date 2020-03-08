#ifndef _HEAP_H_
#define _HEAP_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int HeapDataType;

typedef struct Heap
{
	HeapDataType *_array;
	size_t _size;
	size_t _capacity;
}Heap;


//向下调整算法
void HeapAdjustdown(Heap *pheap);
//初始化
void HeapInit(Heap *pheap, HeapDataType *arr, size_t capacity);
//销毁
void HeapDestory(Heap *pheap);
//开辟空间
void CheckCapacity(Heap *pheap);
//插入
void HeapPush(Heap *pheap, HeapDataType x);
//删除
void HeapPop(Heap *pheap);
//返回堆顶元素
HeapDataType HeapTop(Heap *pheap);
//返回堆的大小
void HeapSize(Heap *pheap);
//判空
void HeapEmpty(Heap *pheap);
//打印堆
void HeapPrint(Heap *pheap);

#endif //_HEAP_H_