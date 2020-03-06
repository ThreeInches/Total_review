#include "DList.h"

int main()
{
	List list;
	DListInit(&list);
	DListPushBack(&list, 1);
	DListPushBack(&list, 2);
	DListPushBack(&list, 3);
	DListPushBack(&list, 4);
	DListPushBack(&list, 5);
	DListPushBack(&list, 6);
	DListPushBack(&list, 7);
	DListPushBack(&list, 8);
	DListPushBack(&list, 9);
	DListPushBack(&list, 10);
	DListPrint(&list);
	DListPopBack(&list);
	DListPrint(&list);
	DListPushFront(&list, 10);
	DListPrint(&list);
	DListPopFront(&list);
	DListPrint(&list);
	ListNode *pos = DListFind(&list, 3);
	printf("%p\n", pos);
	DListInsertBefore(&list, pos, 4);
	DListPrint(&list);
	DListInsertAfter(&list, pos, 2);
	DListPrint(&list);
	DListErasePos(&list, pos);
	DListPrint(&list);
	DListEraseX(&list, 9);
	DListPrint(&list);
	DListModify(&list, pos, 3);
	DListPrint(&list);
	DListDestory(&list);
	system("pause");
	return 0;
}