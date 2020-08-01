#include "sort.h"

void Sort::BubbleSort(vector<int>& array)
{
	if (array.empty())
	{
		return;
	}

	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array.size() - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}

void Sort::SelectSort()
{

}

void Sort::InsertSort()
{

}

void Sort::ShellSort()
{

}

void Sort::QuickSort()
{

}

void Sort::MergeSort()
{

}

void Sort::HeapSort()
{

}

void Sort::CountSort()
{

}

void Sort::BucketSort()
{

}

void Sort::RadixSort()
{

}
