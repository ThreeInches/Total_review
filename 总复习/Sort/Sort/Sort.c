#include "Sort.h"

//Ωªªª∫Ø ˝
void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//BubbleSort£®√∞≈›≈≈–Ú£©
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

//SelectSort£®—°‘Ò≈≈–Ú£©
void SelectSort(SeqList *psl)
{
	//if (psl->_size == 0)
	//{
	//	return;
	//}
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

//InstertSort£®≤Â»Î≈≈–Ú£©
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

//ShellSort£®œ£∂˚≈≈–Ú£©
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

//MergeSort£®πÈ≤¢≈≈–Ú£©
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
}

//QuickSort£®øÏÀŸ≈≈–Ú£©
void QuickSort(SeqList *psl);

//HeapSort£®∂—≈≈–Ú£©
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

//CountSort£®º∆ ˝≈≈–Ú£©
void CountSort(SeqList *psl)
{
	SeqList count;
	SeqListInit(&count, 5000);
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
	int _size = _max - _min + 1;
	for (int i = 0; i < count._size; i++)
	{
		SeqListPushBack(&count, 0);
	}
	for (int i = 0; i < psl->_size; i++)
	{
		count._array[psl->_array[i] - _min]++;
	}
	for (int i = 0; i < _size; i++)
	{
		count._array[i] += count._array[i - 1];
	}
	SeqList tmp;
	SeqListInit(&tmp, 5000);
	for (int i = 0; i < tmp._size; i++)
	{
		SeqListPushBack(&tmp, 0);
	}
	for (int i = psl->_size - 1; i >= 0; i--)
	{
		count._array[psl->_array[i] - _min]--;
		tmp._array[count._array[psl->_array[i] - _min]] = psl->_array[i];
	}
	for (int i = 0; i < psl->_size; i++)
	{
		psl->_array[i] = tmp._array[i];
	}
	SeqListDestory(&count);
	SeqListDestory(&tmp);
}

//BucketSort£®Õ∞≈≈–Ú£©
void BucketSort(SeqList *psl)
{
	int bucket[5000];
	for (int i = 0; i < 5000; i++)
	{
		bucket[i] = 0;
	}
	for (int i = 0; i < psl->_size; i++)
	{
		bucket[psl->_array[i]]++;
	}
	for (int i = 0; i <psl->_size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			psl->_array[i] = bucket[i];
		}
	}
}

//RadixSort£®ª˘ ˝≈≈–Ú£©
void RadixSort(SeqList *psl);