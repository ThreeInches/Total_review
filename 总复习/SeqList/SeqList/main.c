#include "SeqList.h"

int main() {
	SeqList test;

	SeqListInit(&test, 10);
	SeqListPushBack(&test, 1);
	SeqListPushBack(&test, 2);
	SeqListPushBack(&test, 3);
	SeqListPushBack(&test, 4);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 6);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 8);
	SeqListPushBack(&test, 9);
	SeqListPushBack(&test, 10);
	SeqListPrint(&test);
	SeqListPopBack(&test);
	SeqListPrint(&test);
	SeqListPushFront(&test, 11);
	SeqListPrint(&test);
	SeqListPopFront(&test);
	SeqListPrint(&test);
	printf("SeqListFind = %d\n", SeqListFind(&test, 6));
	SeqListRemove(&test, 6);
	SeqListPrint(&test);
	SeqListModify(&test, 0, 12);
	SeqListPrint(&test);
	SeqListBubbleSort(&test);
	SeqListPrint(&test);
	printf("SeqListBinarySort = %d\n", SeqListBinarySearch(&test, 12));
	SeqListRemoveAll(&test, 2);
	SeqListPrint(&test);
	SeqListDestory(&test);
	system("pause");
	return 0;
}