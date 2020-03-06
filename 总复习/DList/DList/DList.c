#include "DList.h"

//为x申请结点
ListNode* BuyListNode(DLDataType x)
{
	ListNode *listnode = (ListNode *)malloc(sizeof(ListNode));
	if (listnode == NULL)
	{
		return NULL;
	}
	listnode->data = x;
	listnode->_prev = NULL;
	listnode->_next = NULL;
	return listnode;
}

//初始化
void DListInit(List *plist)
{
	assert(plist);
	ListNode *_head = BuyListNode(0);
	plist->_head = _head;
	plist->_head->_prev = plist->_head;
	plist->_head->_next = plist->_head;
}

//销毁
void DListDestory(List *plist)
{
	assert(plist->_head);
	ListNode *cur = plist->_head->_next;
	while (cur != plist->_head)
	{
		ListNode *tmp = cur->_next;
		free(cur);
		cur = tmp;
	}
	free(plist->_head);
	plist->_head = NULL;
}

//尾插
void DListPushBack(List *plist, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = plist->_head->_prev;
	cur->_next = node;
	node->_prev = cur;
	plist->_head->_prev = node;
	node->_next = plist->_head;
}

//尾删
void DListPopBack(List *plist)
{
	assert(plist->_head);
	ListNode *cur = plist->_head->_prev;
	cur->_next->_prev = cur->_prev;
	cur->_prev->_next = cur->_next;
	free(cur);
	cur = NULL;
}

//头插
void DListPushFront(List *plist, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = plist->_head->_next;
	cur->_prev = node;
	node->_next = cur;
	plist->_head->_next = node;
	node->_prev = plist->_head;
}

//头删
void DListPopFront(List *plist)
{
	assert(plist->_head);
	ListNode *cur = plist->_head->_next;
	cur->_prev->_next = cur->_next;
	cur->_next->_prev = cur->_prev;
	free(cur);
	cur = NULL;
}

//查找元素
ListNode* DListFind(List *plist, DLDataType x)
{
	assert(plist->_head);
	for (ListNode *cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)
	{
		if (cur->data == x)
		{
			return cur;
		}
	}
	return NULL;
}

//在pos位置之前插入
void DListInsertBefore(List *plist, ListNode *pos, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = pos->_next;
	cur->_prev = node;
	node->_next = cur;
	plist->_head->_next = node;
	node->_prev = plist->_head;
}

//在pos之后插入
void DListInsertAfter(List *plist, ListNode *pos, DLDataType x)
{
	assert(plist->_head);
	ListNode *node = BuyListNode(x);
	ListNode *cur = pos->_prev;
	cur->_next = node;
	node->_prev = cur;
	plist->_head->_prev = node;
	node->_next = plist->_head;
}

//删除pos位置结点
void DListErasePos(List *plist, ListNode *pos)
{
	assert(plist->_head);
	ListNode *cur = pos->_prev;
	cur->_next->_prev = cur->_prev;
	cur->_prev->_next = cur->_next;
	free(cur);
	cur = NULL;
}

//删除元素x
void DListEraseX(List *plist, DLDataType x)
{
	assert(plist->_head);
	ListNode *pos = DListFind(plist, x);
	ListNode *cur = pos->_prev;
	cur->_next->_prev = cur->_prev;
	cur->_prev->_next = cur->_next;
	free(cur);
	cur = NULL;
}

//修改pos位置元素为x
void DListModify(List *plist, ListNode *pos, DLDataType x)
{
	assert(plist->_head);
	DListInsertBefore(plist, pos, x);
	DListErasePos(plist, pos->_next);
}

//打印双向带头循环链表
void DListPrint(List *plist)
{
	assert(plist->_head);
	printf(" plist->_head ");
	for (ListNode *cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)
	{
		printf("<==> %d ", cur->data);
	}
	printf("<==> plist->_head \n");
}