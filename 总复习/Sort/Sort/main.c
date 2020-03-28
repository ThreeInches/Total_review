#include "Sort.h"
#include "SeqList.h"
#include "Queue.h"

int main()
{
	SeqList seqlist;
	SeqListInit(&seqlist, 5000);
	//srand((unsigned int)time(NULL));
	for (int i = 0; i < 5000; i++)
	{
		int num = rand() % 5000 + 1;
		SeqListPushBack(&seqlist, num);
	}
	
	//BubbleSort(&seqlist);
	//SeqListPrint(&seqlist);

	//SelectSort(&seqlist);
	//SeqListPrint(&seqlist);

	//InstertSort(&seqlist);
	//SeqListPrint(&seqlist);

	//ShellSort(&seqlist);
	//SeqListPrint(&seqlist);

	//MergeSort(&seqlist);
	//SeqListPrint(&seqlist);

	//QuickSort(&seqlist);
	//SeqListPrint(&seqlist);

	//QuickSortNonR(&seqlist);
	//SeqListPrint(&seqlist);

	//HeapSort(&seqlist);
	//SeqListPrint(&seqlist);

	//CountSort(&seqlist);
	//SeqListPrint(&seqlist);


	BucketSort(&seqlist);
	SeqListPrint(&seqlist);

	//RadixSort(&seqlist);
	//SeqListPrint(&seqlist);

	system("pause");
	return 0;
}