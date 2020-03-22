#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solocation
{
public:
	void BucketSort(vector<int> arr)
	{
		int _max = arr[0];
		int _min = arr[0];
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] > _max)
			{
				_max = arr[i];
			}
			if (arr[i] < _min)
			{
				_min = arr[i];
			}
		}
		int BucketNum = (_max - _min) / arr.size() + 1;
		vector<int> *Bucket = new vector<int>[BucketNum];
		for (int i = 0; i < arr.size(); i++)
		{
			int change = (arr[i] - _min) / BucketNum;
			Bucket[change].push_back(arr[i]);
		}
		for (int i = 0; i < arr.size(); i++)
		{
			if (Bucket[i].size() > 0)
			{
				sort(Bucket[i].begin(), Bucket[i].end());
			}
		}
		int index = 0;
		for (int i = 0; i < Bucket->size(); i++)
		{
			for (int j = 0; j < Bucket[i].size(); j++)
			{
				arr[index++] = Bucket[i][j];
			}
		}
	}
	void SortPrint(vector<int> arr)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			printf("%d ", arr[i]);
		}
	}
};

int main()
{
	Solocation a;
	vector<int> arr;
	for (int i = 0; i < 5000; i++)
	{
		arr.push_back(i + 1);
	}
	a.BucketSort(arr);
	a.SortPrint(arr);
	system("pause");
	return 0;
}
