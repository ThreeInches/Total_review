#include "Heap.h"

int main()
{
	Heap heap;
	HeapDataType arr[ARRSIZE] = { 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	HeapInit(&heap, arr, ARRSIZE);
	HeapPrint(&heap);
	HeapPush(&heap, 12);
	HeapPush(&heap, 13);
	HeapPush(&heap, 14);
	HeapPush(&heap, 15);
	HeapPush(&heap, 16);
	HeapPush(&heap, 17);
	HeapPush(&heap, 18);
	HeapPush(&heap, 19);
	HeapPrint(&heap);

	HeapPop(&heap);
	HeapPrint(&heap);

	printf("HeapDataType = %d \n", HeapTop(&heap));
	printf("HeapSize = %d \n", HeapSize(&heap));
	printf("HeapEmpty = %d \n", HeapEmpty(&heap));

	HeapSort(&heap);
	HeapPrint(&heap);
	HeapDestory(&heap);
	system("pause");
	return 0;
}