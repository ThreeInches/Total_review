#include "Sort.h"

//交换函数
void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//BubbleSort（冒泡排序）
// O(n^2)   O(1)    稳定 
void BubbleSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int i = 0; i < psl->_size; i++)
	{
		for (int j = 0; j < psl->_size - i - 1; j++)
		{
			if (psl->_array[j] > psl->_array[j + 1])
			{
				Swap(&psl->_array[j], &psl->_array[j + 1]);
			}
		}
	}
}

//SelectSort（选择排序）
// O(n^2)   O(1)    不稳定
void SelectSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int i = 0; i < psl->_size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < psl->_size; j++)
		{
			if (psl->_array[j] < psl->_array[min])
			{
				min = j;
			}
		}
		Swap(&psl->_array[i], &psl->_array[min]);
	}
}

//InstertSort（插入排序）
// O(n^2)     O(1)    稳定
//  最坏 O(n^2)   最好 O(n)
void InstertSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int i = 0; i < psl->_size; i++)
	{
		int tmp = psl->_array[i];
		int j;
		for (j = i; j > 0 && psl->_array[j - 1] > tmp; j--)
		{
			psl->_array[j] = psl->_array[j - 1];
		}
		psl->_array[j] = tmp;
	}
}

//ShellSort（希尔排序）
void ShellSort(SeqList *psl)
{
	if (psl->_size == 0)
	{
		return;
	}
	for (int gap = psl->_size / 2; gap; gap /= 2)
	{
		for (int k = 0; k < gap; k++)
		{
			for (int i = k + gap; i < psl->_size; i += gap)
			{
				int tmp = psl->_array[i];
				int j;
				for (j = i; j > gap && psl->_array[j - gap] > tmp; j -= gap)
				{
					psl->_array[j] = psl->_array[j - gap];
				}
				psl->_array[j] = tmp;
			}
		}
	}
}

//MergeSort（归并排序）
void DealMergeSort(SeqList *psl, SeqList *tmp, int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int mid = (start + end) / 2;
	DealMergeSort(psl, tmp, start, mid);
	DealMergeSort(psl, tmp, mid + 1, end);
	int a = start;
	int b = mid + 1;
	int c = start;
	while (a <= mid && b <= end)
	{
		if (psl->_array[a] < psl->_array[b])
		{
			tmp->_array[c] = psl->_array[a];
			a++;
		}
		else
		{
			tmp->_array[c] = psl->_array[b];
			b++;
		}
		c++;
	}
	for (; a <= mid; a++)
	{
		tmp->_array[c] = psl->_array[a];
		c++;
	}
	for (; b <= end; b++)
	{
		tmp->_array[c] = psl->_array[b];
		c++;
	}
	for (int i = start; i <= end; i++)
	{
		psl->_array[i] = tmp->_array[i];
	}
}

void MergeSort(SeqList *psl)
{
	SeqList tmp;
	SeqListInit(&tmp, 5000);
	DealMergeSort(psl, &tmp, 0, psl->_size);
	SeqListDestory(&tmp);
}

//QuickSort（快速排序）
//寻找基准值下标的方法
//hoare法
int GetIndexHoareWay(SeqList *psl, int left, int right)
{
	int a = left + 1;
	int b = right - 2;
	int mid = (left + right) / 2;
	if (psl->_array[left] > psl->_array[mid])
	{
		Swap(&psl->_array[left], &psl->_array[mid]);
	}
	if (psl->_array[mid] > psl->_array[right])
	{
		Swap(&psl->_array[mid], &psl->_array[right]);
	}
	if (psl->_array[left] > psl->_array[mid])
	{
		Swap(&psl->_array[left], &psl->_array[mid]);
	}
	if (right - left <= 2)
	{
		return mid;
	}
	Swap(&psl->_array[mid], &psl->_array[right - 1]);
	while (a <= b)
	{
		while (a < right - 1 && psl->_array[a] <= psl->_array[right - 1])
		{
			a++;
		}

		while (b > 1 && psl->_array[b] >= psl->_array[right - 1])
		{
			b--;
		}

		if (a == b && (a == 1 || a == right - 1))
		{
			break;
		}

		if (a < b)
		{
			Swap(&psl->_array[a], &psl->_array[b]);
		}
	}
	Swap(&psl->_array[a], &psl->_array[right - 1]);
	return a;
}

//双指针法1
int GetIndexDoublePointWay1(SeqList *psl, int left, int right)
{
	int a = left;
	int b = right;
	int flag = 0;
	while (psl->_array[b] > psl->_array[a])
	{
		b--;
	}
	while (a < b)
	{
		Swap(&psl->_array[a], &psl->_array[b]);
		flag = !flag;
		while (psl->_array[b] >= psl->_array[a])
		{
			flag ? a++ : b--;
		}
	}
	return flag ? b : a;
}

//双指针法2
int GetIndexDoublePointWay2(SeqList *psl, int left, int right)
{
	int a = left;
	int b = right - 1;
	int mid = (left + right) / 2;
	Swap(&psl->_array[mid], &psl->_array[right]);
	while (a <= b)
	{
		while (a < right && psl->_array[a] <= psl->_array[right])
		{
			a++;
		}
		while (b > 0 && psl->_array[b] >= psl->_array[right])
		{
			b--;
		}
		if ((a == b) && (a == 0 || a == right))
		{
			break;
		}
		if (a < b)
		{
			Swap(&psl->_array[a], &psl->_array[b]);
		}
	}
	Swap(&psl->_array[a], &psl->_array[right]);
	return a;
}

//挖坑法
int GetIndexDigWay(SeqList *psl, int left, int right)
{
	SLDataType tmp;
	tmp = psl->_array[left];
	while (left < right)
	{
		while (psl->_array[right] >= tmp && left < right)
		{
			right--;
		}
		psl->_array[left] = psl->_array[right];
		while (psl->_array[left] <= tmp && left < right)
		{
			left++;
		}
		psl->_array[right] = psl->_array[left];
	}
	psl->_array[left] = tmp;
	return left;
}

void DealQuickSort(SeqList *psl, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int index = GetIndexHoareWay(psl, left, right);
	DealQuickSort(psl, left, index - 1);
	DealQuickSort(psl, index + 1, right);
}

void QuickSort(SeqList *psl)
{
	DealQuickSort(psl, 0, psl->_size - 1);
}

//快速排序非递归
void QuickSortNonR(SeqList *psl)
{
	int left;
	int right;
	int index;
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, 0);
	QueuePush(&queue, psl->_size - 1);
	while (!QueueEmpty(&queue))
	{
		left = QueueFront(&queue);
		QueuePop(&queue);
		right = QueueFront(&queue);
		QueuePop(&queue);
		index = GetIndexDigWay(psl, left, right);
		if (left < index - 1)
		{
			QueuePush(&queue, left);
			QueuePush(&queue, index);
		}
		if (index + 1 < right)
		{
			QueuePush(&queue, index + 1);
			QueuePush(&queue, right);
		}
	}
	QueueDestory(&queue);
}

//HeapSort（堆排序）
void HeapAdjustDown(SeqList *psl, int root)
{
	while (2 * root + 1 < psl->_size)
	{
		int min;
		int left = 2 * root + 1;
		int right = 2 * root + 2;
		if (right >= psl->_size)
		{
			min = left;
		}
		else
		{
			if (psl->_array[left] > psl->_array[right])
			{
				min = left;
			}
			else
			{
				min = right;
			}
		}
		if (psl->_array[root] < psl->_array[min])
		{
			Swap(&psl->_array[root], &psl->_array[min]);
			root = min;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(SeqList *psl)
{
	for (int i = (psl->_size / 2) - 1; i >= 0; i--)
	{
		HeapAdjustDown(psl, i);
	}
	int tmp = psl->_size;
	while (psl->_size > 0)
	{
		Swap(&psl->_array[0], &psl->_array[psl->_size - 1]);
		psl->_size--;
		HeapAdjustDown(psl, 0);
	}
	psl->_size = tmp;
}

//CountSort（计数排序）
void CountSort(SeqList *psl)
{
	int index = 0;
	SeqList tmp;
	SeqListInit(&tmp, 5000);
	int _max = psl->_array[0];
	int _min = psl->_array[0];
	for (int i = 0; i < psl->_size; i++)
	{
		if (psl->_array[i]>_max)
		{
			_max = psl->_array[i];
		}
		if (psl->_array[i] < _min)
		{
			_min = psl->_array[i];
		}
	}
	SeqList count;
	SeqListInit(&count, _max - _min + 1);
	for (int i = _min; i < _max; i++)
	{
		SeqListPushBack(&count, 0);
	}
	for (int i = _min; i < _max; i++)
	{
		count._array[psl->_array[i] - _min]++;
	}
	for (int i = _min; i < _max; i++)
	{
		for (int j = 0; j < count._array[i]; j++)
		{
			tmp._array[index++] = i;
		}
	}
	for (int i = 0; i < psl->_size; i++)
	{
		psl->_array[i] = tmp._array[i];
	}
	SeqListDestory(&count);
	SeqListDestory(&tmp);
}

//BucketSort（桶排序）
void BucketSort(SeqList *psl)
{
	int index = 0;
	SeqList tmp;
	SeqListInit(&tmp, 5000);
	int _max = psl->_array[0];
	int _min = psl->_array[0];
	for (int i = 0; i < psl->_size; i++)
	{
		if (psl->_array[i]>_max)
		{
			_max = psl->_array[i];
		}
		if (psl->_array[i] < _min)
		{
			_min = psl->_array[i];
		}
	}
	int BucketNum = ((_max - _min) / psl->_size) + 1;
	SeqList bucket;
	SeqListInit(&bucket, ((BucketNum) * (_max - _min) + 2));
	for (int i = 0; i < psl->_size; i++)
	{

	}
}

//RadixSort（基数排序）
int GetMax(SeqList *psl)
{
	int _max = psl->_array[0];
	for (int i = 0; i < psl->_size; i++)
	{
		if (_max < psl->_array[i])
		{
			_max = psl->_array[i];
		}
	}
	return _max;
}

void RadixCountSort(SeqList *psl, int exp)
{
	SeqList tmp;
	SeqList bucket;
	SeqListInit(&tmp, 5000);
	SeqListInit(&bucket, 10);
	for (int i = 0; i < psl->_size; i++)
	{
		bucket._array[(psl->_array[i] / 10) % exp]++;
	}
	for (int i = 0; i < 10; i++)
	{
		bucket._array[i] += bucket._array[i - 1];
	}
	for (int i = psl->_size - 1; i >= 0; i--)
	{
		tmp._array[bucket._array[(psl->_array[i] / exp) % 10] - 1] = psl->_array[i];
		bucket._array[(psl->_array[i] / exp) % 10]--;
	}
	for (int i = 0; i < psl->_size; i++)
	{
		psl->_array[i] = tmp._array[i];
	}
	SeqListDestory(&tmp);
	SeqListDestory(&bucket);
}

void RadixSort(SeqList *psl)
{
	int exp;
	int _max = GetMax(psl);
	for (int exp = 1; _max / exp > 0; exp *= 10)
	{
		RadixCountSort(psl, exp);
	}
}
