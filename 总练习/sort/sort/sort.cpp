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

void Sort::SelectSort(vector<int>& array)
{
	if (array.empty())
	{
		return;
	}

	for (int i = 0; i < array.size(); i++)
	{
		int min = i;
		for (int j = i + 1; j < array.size(); j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		swap(array[i], array[min]);
	}
}

void Sort::InsertSort(vector<int>& array)
{
	if (array.empty())
	{
		return;
	}

	for (int i = 1; i < array.size(); i++)
	{
		int tmp = array[i];
		int j;
		for(j = i; j > 0; j--)
		{
			if (tmp < array[j - 1])
			{
				array[j] = array[j - 1];
			}
		}
		array[j] = tmp;
	}
}

void Sort::ShellSort(vector<int>& array)
{

}

void Sort::QuickSort(vector<int>& array)
{

}

void Sort::MergeSort(vector<int>& array)
{

}

void Sort::HeapSort(vector<int>& array)
{

}

void Sort::CountSort(vector<int>& array)
{

}

void Sort::BucketSort(vector<int>& array)
{

}

void Sort::RadixSort(vector<int>& array)
{

}
