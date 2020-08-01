#include <iostream>
#include <functional>
#include <vector>

using namespace std;

class Sort
{
public:
	void BubbleSort(vector<int>& array);
	void SelectSort();
	void InsertSort();
	void ShellSort();
	void QuickSort();
	void MergeSort();
	void HeapSort();
	void CountSort();
	void BucketSort();
	void RadixSort();
};