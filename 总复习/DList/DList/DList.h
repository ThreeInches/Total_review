#ifndef _DLIST_H_
#define _DLIST_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int DLDataType;

typedef struct ListNode
{
	DLDataType data;
	struct ListNode *_next;
	struct ListNode *_prev;
}ListNode;

typedef struct List
{
	ListNode *_head;
}List;

//为x申请结点
ListNode* BuyListNode(DLDataType x);
//初始化
void DListInit(List *plist);
//销毁
void DListDestory(List *plist);
//尾插
void DListPushBack(List *plist, DLDataType x);
//尾删
void DListPopBack(List *plist);
//头插
void DListPushFront(List *plist, DLDataType x);
//头删
void DListPopFront(List *plist);
//查找元素
ListNode* DListFind(List *plist, DLDataType x);
//在pos位置之前插入
void DListInsertBefore(List *plist, ListNode *pos, DLDataType x);
//在pos之后插入
void DListInsertAfter(List *plist, ListNode *pos, DLDataType x);
//删除pos位置结点
void DListErasePos(List *plist, ListNode *pos);
//删除元素x
void DListEraseX(List *plist, DLDataType x);
//修改pos位置元素为x
void DListModify(List *plist, ListNode *pos, DLDataType x);
//打印双向带头循环链表
void DListPrint(List *plist);
#endif //_DLIST_H_