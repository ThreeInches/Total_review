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

	for (int i = 0; i < array.size(); i++)
	{
		int tmp = array[i];
		int j;
		for(j = i; j > 0; j--)
		{
			if (tmp < array[j - 1])
			{
				array[j] = array[j - 1];
			}
			else
			{
				break;
			}
		}

		array[j] = tmp;
	}
}

void Sort::ShellSort(vector<int>& array)
{
	if (array.empty())
	{
		return;
	}

	for (int gap = array.size() / 2; gap; gap /= 2)
	{
		for (int k = 0; k < gap; k++)
		{
			for (int i = k + gap; i < array.size(); i += gap)
			{
				int tmp = array[i];
				int j;
				for (j = i; j >= gap; j -= gap)
				{
					if (tmp < array[j - gap])
					{
						array[j] = array[j - gap];
					}
					else
					{
						break;
					}
				}
				array[j] = tmp;
			}
		}
	}
}

int Sort::GetIndexHoreWay(vector<int>& array, int left, int right)
{
	return 1;
}

int Sort::GetIndexDigWay(vector<int>& array, int left, int right)
{
	return 1;
}

int Sort::GetIndexDoubleWay1(vector<int>& array, int left, int right)
{
	int a = left;
	int b = right;
	int flag = 0;
	while (array[b] > array[a])
	{
		b--;
	}
	while (a < b)
	{
		swap(array[a], array[b]);
		flag = !flag;
		while (array[b]>array[a])
		{
			flag ? a++ : b--;
		}
	}
	return flag ? b : a;
}

int Sort::GetIndexDoubleWay2(vector<int>& array, int left, int right)
{
	return 1;
}

void Sort::dealQuickSort(vector<int>& array, int left, int right)
{
	if (left >= right)
	{
		return;
	}

	int index = GetIndexDoubleWay1(array, left, right);
	dealQuickSort(array, left, index - 1);
	dealQuickSort(array, index + 1, right);
}

void Sort::QuickSort(vector<int>& array)
{
	dealQuickSort(array, 0, array.size() - 1);
}
void Sort::QuickSortNon(vector<int>& array)
{
	int left;
	int right;
	int index;
	queue<int> qu;
	qu.push(0);
	qu.push(array.size() - 1);
	while (!qu.empty())
	{
		left = qu.front();
		qu.pop();
		right = qu.front();
		qu.pop();
		index = GetIndexDoubleWay1(array, left, right);
		if (left < index - 1)
		{
			qu.push(left);
			qu.push(index - 1);
		}
		if (right > index + 1)
		{
			qu.push(index + 1);
			qu.push(right);
		}
	}
}

void Sort::dealMergeSort(vector<int>& array, vector<int>& tmp, int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int mid = (start + end) / 2;
	dealMergeSort(array, tmp, 0, mid);
	dealMergeSort(array, tmp, mid + 1, end);

	int a = start;
	int b = mid + 1;
	int c = start;

	while (a <= mid && b <= end)
	{
		if (array[a] < array[b])
		{
			tmp[c] = array[a];
			a++;
		}
		else
		{
			tmp[c] = array[b];
			b++;
		}
		c++;
	}

	while (a <= mid)
	{
		tmp[c] = array[a];
		a++;
		c++;
	}

	while (b <= end)
	{
		tmp[c] = array[b];
		b++;
		c++;
	}
	for (int i = start; i <= end; i++)
	{
		array[i] = tmp[i];
	}
}

void Sort::MergeSort(vector<int>& array)
{
	vector<int> tmp;
	tmp.resize(array.size());
	dealMergeSort(array, tmp, 0, array.size() - 1);
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
