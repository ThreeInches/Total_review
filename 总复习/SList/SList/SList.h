#ifndef _SLIST_H_
#define _SLIST_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//带头结点的单向非循环链表
typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode *next;
}SListNode;

typedef struct SList
{
	SListNode *head;
}SList;

//初始化
void SListInit(SList *plist);
//销毁
void SListDestory(SList *plist);
//为x申请结点
SListNode* BuySListNode(SLTDataType x);
//头插
void SListPushFront(SList *plist, SLTDataType x);
//头删
void SListPopFront(SList *plist);
//尾插
void SListPushBack(SList *plist, SLTDataType x);
//尾删
void SListPopBack(SList *plist);
//在pos位置之后插入
void SListInsertAfter(SList *plist, SListNode *pos, SLTDataType x);
//在pos位置之前插入
void SListInsertBefore(SList *plist, SListNode *pos, SLTDataType x);
//删除pos结点
void SListErasePos(SListNode *pos);
//查找元素x
SListNode* SListFind(SList *plist, SLTDataType x);
//删除元素x
void SListEraseX(SList *plist, SLTDataType x);
//修改值
void SListModify(SListNode *pos, SLTDataType x);
//打印
void SListPrint(SList *plist);

#endif //_SLITS_H_