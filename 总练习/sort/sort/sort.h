#include <iostream>
#include <functional>
#include <vector>
#include <queue>

using namespace std;

class Sort
{
public:
	void BubbleSort(vector<int>& array);
	void SelectSort(vector<int>& array);
	void InsertSort(vector<int>& array);
	void ShellSort(vector<int>& array);
	int GetIndexHoreWay(vector<int>& array, int left, int right);
	int GetIndexDigWay(vector<int>& array, int left, int right);
	int GetIndexDoubleWay1(vector<int>& array, int left, int right);
	int GetIndexDoubleWay2(vector<int>& array, int left, int right);
	void dealQuickSort(vector<int>& array, int left, int right);
	void QuickSort(vector<int>& array);
	void QuickSortNon(vector<int>& array);
	void dealMergeSort(vector<int>& array, vector<int>& tmp, int start, int end);
	void MergeSort(vector<int>& array);
	void HeapSort(vector<int>& array);
	void CountSort(vector<int>& array);
	void BucketSort(vector<int>& array);
	void RadixSort(vector<int>& array);
};