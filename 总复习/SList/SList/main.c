#include "SList.h"

int main()
{
	SList plist;
	SListInit(&plist);
	SListPrint(&plist);
	
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 8);
	SListPushBack(&plist, 9);
	SListPushBack(&plist, 10);
	SListPrint(&plist);

	SListPushFront(&plist, 0);
	SListPrint(&plist);

	SListPopFront(&plist);
	SListPrint(&plist);

	SListPopBack(&plist);
	SListPrint(&plist);

	SListNode *pos = SListFind(&plist, 5);

	SListInsertBefore(&plist, pos, 6);
	SListPrint(&plist);
	SListInsertAfter(&plist, pos, 4);
	SListPrint(&plist);
	SListErasePos(pos);
	SListPrint(&plist);
	SListEraseX(&plist, 3);
	SListPrint(&plist);
	SListDestory(&plist);
	system("pause");
	return  0;
}