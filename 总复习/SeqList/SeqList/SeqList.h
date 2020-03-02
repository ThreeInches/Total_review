#ifndef _SEQLIST_H_
#define _SEQLIST_H_


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define CAPACITY 2

typedef int SLDataType;
//顺序表的动态存储
typedef struct SeqList
{
	SLDataType *array;//指向动态开辟的数组
	size_t size;//有效数据长度
	size_t capacity;//当前容量大小
}SeqList;

//初始化顺序表
void SeqListInit(SeqList *psl, size_t capacity);
//销毁顺序表
void SeqListDestory(SeqList *psl);
//顺序表扩容
void CheckCapacity(SeqList *psl);
//尾插
void SeqListPushBack(SeqList *psl, SLDataType x);
//尾删
void SeqListPopBack(SeqList *psl);
//头插
void SeqListPushFront(SeqList *psl, SLDataType x);
//头删
void SeqListPopFront(SeqList *psl);
//查找元素
int SeqListFind(SeqList *psl, SLDataType x);
//pos位置插入x
void SeqListInsert(SeqList *psl, size_t pos, SLDataType x);
//删除pos位置
void SeqListErase(SeqList *psl, size_t pos);
//删除x
void SeqListRemove(SeqList *psl, SLDataType x);
//修改pos位置为x
void SeqListModify(SeqList *psl, size_t pos, SLDataType x);
//打印顺序表
void SeqListPrint(SeqList *psl);
//顺序表的冒泡排序
void SeqListBubbleSort(SeqList *psl);
//顺序表的二分查找
int SeqListBinarySearch(SeqList *psl, SLDataType x);
//删除顺序表的所有x元素
void SeqListRemoveAll(SeqList *psl, SLDataType x);

#endif//_SEQLIST_H_