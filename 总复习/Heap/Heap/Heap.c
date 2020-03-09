#include	 "Heap.h"

//向下调整算法
void HeapAdjustdown(Heap *pheap, int root)
{
	assert(pheap);
	int min;
	int left = 2 * root + 1;
	int right = 2 * root + 2;
	while (left < pheap->_size)
	{
		if (right >= pheap->_size)
		{
			min = left;
		}
		else
		{
			if (pheap->_array[left] > pheap->_array[right])
			{
				min = left;
			}
			else
			{
				min = right;
			}
		}
		if (pheap->_array[root] < pheap->_array[min])
		{
			HeapDataType tmp = pheap->_array[root];
			pheap->_array[root] = pheap->_array[min];
			pheap->_array[min] = tmp;
			root = min;
		}
		else
		{
			break;
		}
	}
}

//初始化
void HeapInit(Heap *pheap, HeapDataType *arr, size_t capacity)
{
	assert(pheap);
	pheap->_capacity = capacity * 2;
	pheap->_size = capacity;
	pheap->_array = (HeapDataType *)calloc(pheap->_capacity, sizeof(HeapDataType));
	assert(pheap->_array);
	for (int i = 0; i < pheap->_size; i++)
	{
		pheap->_array[i] = arr[i];
	}
	for (int i = (pheap->_size / 2) - 1; i >= 0; i--)
	{
		HeapAdjustdown(pheap, i);
	}
}

//销毁
void HeapDestory(Heap *pheap)
{
	assert(pheap);
	if (pheap->_array)
	{
		free(pheap->_array);
	}
	pheap->_array = NULL;
	pheap->_size = 0;
	pheap->_capacity = 0;
}

//开辟空间
void CheckCapacity(Heap *pheap)
{
	assert(pheap);
	if (pheap->_size == pheap->_capacity)
	{
		pheap->_capacity *= CAPACITY;
		pheap->_array = (HeapDataType *)realloc(pheap->_array, pheap->_capacity*sizeof(HeapDataType));
	}
}

//插入
void HeapPush(Heap *pheap, HeapDataType x)
{
	assert(pheap);
	CheckCapacity(pheap);
	pheap->_array[pheap->_size] = x;
	pheap->_size++;
	for (int i = (pheap->_size / 2) - 1; i >= 0; i--)
	{
		HeapAdjustdown(pheap->_array, i);
	}
}

//删除
void HeapPop(Heap *pheap)
{
	assert(pheap);
	HeapDataType tmp = pheap->_array[0];
	pheap->_array[0] = pheap->_array[pheap->_size - 1];
	pheap->_array[pheap->_size - 1] = tmp;
	pheap->_size--;
	for (int i = (pheap->_size / 2) - 1; i >= 0; i--)
	{
		HeapAdjustdown(pheap->_array, i);
	}
}

//返回堆顶元素
HeapDataType HeapTop(Heap *pheap)
{
	assert(pheap);
	return pheap->_array[0];
}

//返回堆的大小
int HeapSize(Heap *pheap)
{
	assert(pheap);
	return pheap->_size;
}

//判空
int HeapEmpty(Heap *pheap)
{
	assert(pheap);
	return (pheap->_size > 0) ? -1 : 1;
}

//打印堆
void HeapPrint(Heap *pheap)
{
	for (int i = 0; i < pheap->_size; i++)
	{
		printf(" %d ", pheap->_array[i]);
	}
	printf("\n");
}
