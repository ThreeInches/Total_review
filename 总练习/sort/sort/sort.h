#include <iostream>
#include <functional>
#include <vector>

using namespace std;

class Sort
{
public:
	void BubbleSort(vector<int>& array);
	void SelectSort(vector<int>& array);
	void InsertSort(vector<int>& array);
	void ShellSort(vector<int>& array);
	void QuickSort(vector<int>& array);
	void MergeSort(vector<int>& array);
	void HeapSort(vector<int>& array);
	void CountSort(vector<int>& array);
	void BucketSort(vector<int>& array);
	void RadixSort(vector<int>& array);
};