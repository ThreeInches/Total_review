#include "Heap.h"

int main()
{
	Heap heap;
	HeapDataType arr[ARRSIZE] = { 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	HeapInit(&heap, arr, ARRSIZE);
	//HeapPush(&heap, 95);
	HeapPrint(&heap);
	//HeapPop(&heap);
	//HeapPrint(&heap);
	//HeapDestory(&heap);
	system("pause");
	return 0;
}