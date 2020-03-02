#include "SeqList.h"

//初始化顺序表
void SeqListInit(SeqList *psl, size_t capacity)
{
	assert(psl);
	psl->capacity = capacity;
	psl->array = (SLDataType *)malloc(capacity*sizeof(SLDataType));
	assert(psl->array);
	psl->size = 0;
}

//销毁顺序表
void SeqListDestory(SeqList *psl)
{
	assert(psl);
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->capacity = 0;
		psl->size = 0;
	}
}

//顺序表扩容
void CheckCapacity(SeqList *psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		psl->capacity *= CAPACITY;
		psl->array = (SLDataType *)realloc(psl->size, psl->capacity*sizeof(SLDataType));
	}
}

//尾插
void SeqListPushBack(SeqList *psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}

//尾删
void SeqListPopBack(SeqList *psl)
{
	assert(psl || psl->size);
	psl->size--;
}

//头插
void SeqListPushFront(SeqList *psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	for (int i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = x;
	psl->size++;
}

//头删
void SeqListPopFront(SeqList *psl)
{
	assert(psl);
	psl->size--;
	for (size_t i = 0; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

//查找元素
int SeqListFind(SeqList *psl, SLDataType x)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//pos位置插入x
void SeqListInsert(SeqList *psl, size_t pos, SLDataType x)
{
	assert(psl || pos <= psl->size);
	CheckCapacity(psl);
	for (int i = psl->size - 1; i >= pos; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

//删除pos位置
void SeqListErase(SeqList *psl, size_t pos)
{
	assert(psl || pos <= psl->size);
	psl->size--;
	for (int i = pos; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

//删除x
void SeqListRemove(SeqList *psl, SLDataType x)
{
	assert(psl);
	size_t pos = SeqListFind(psl, x);
	if (pos)
	{
		SeqListErase(psl, pos);
	}
}

//修改pos位置为x
void SeqListModify(SeqList *psl, size_t pos, SLDataType x)
{
	assert(psl || pos <= psl->size);
	psl->array[pos] = x;
}

//打印顺序表
void SeqListPrint(SeqList *psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->array[i]);
	}
	putchar('\n');
}

//顺序表的冒泡排序
void SeqListBubbleSort(SeqList *psl)
{
	assert(psl);
	int flag = 0;
	for (int i = 0; i < psl->size - 1; i++)
	{
		for (int j = 0; j < psl->size - 1; j++)
		{
			if (psl->array[j] > psl->array[j + 1])
			{
				SLDataType tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
				flag = 1;
			}
			if (flag == 0)
			{
				return;
			}
		}
	}
}

//顺序表的二分查找
int SeqListBinarySearch(SeqList *psl, SLDataType x)
{
	assert(psl);
	int left = 0;
	int right = psl->size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (psl->array[mid] < x)
		{
			left = mid + 1;
		}
		else if (psl->array[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//删除顺序表的所有x元素
void SeqListRemoveAll(SeqList *psl, SLDataType x)
{
	assert(psl);
	size_t pos = SeqListFind(psl, x);
	if (pos == 0 || pos)
	{
		SeqListErase(psl, pos);
	}
}