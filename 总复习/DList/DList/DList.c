#include "DList.h"

//为x申请结点
ListNode* BuyListNode(DLDataType x)
{
	ListNode *listnode = (ListNode *)malloc(sizeof(DLDataType));
	if (listnode == NULL)
	{
		return NULL;
	}
	listnode->data = x;
	listnode->prev = NULL;
	listnode->next = NULL;
	return listnode;
}

//初始化
void DListInit(List *plist)
{
	assert(plist);
	ListNode *head = BuyListNode(0);
	plist->head = head;
	plist->head->prev = plist->head;
	plist->head->next = plist->head;
}

//销毁
void DListDestory(List *plist)
{
	assert(plist);
	ListNode *cur = plist->head->next;
	while (cur != plist->head)
	{
		ListNode *tmp = cur->next;
		free(cur);
		cur = tmp;
	}
	free(plist->head);
	plist->head = NULL;
}

//尾插
void DListPushBack(List *plist, DLDataType x)
{
	assert(plist);
	ListNode *cur = plist->head;
	
}

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
//打印双向带头循环链表
void DListPrint(List *plist);