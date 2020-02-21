#include <stdio.h>
#include <stdlib.h>

#if 0
void test111(const char *str)
{
	printf("%s\n", str);
}

int main()
{
	//函数指针pfun
	void(*pfunArr[5])(const char *str);
	pfunArr[0] = test111;
	//指向函数指针数组pfunArr的指针ppfunArr
	void(*(ppfunArr)[10])(const char *str) = &pfunArr;
	system("pause");
	return 0;
}
#endif

#if 0

int int_cmp(const void *p1, const void *p2)
{
	return (*(int*)p1 > *(int*)p2);
}

int main()
{
	int arr[] = { 3, 1, 2, 7, 5, 6, 4, 8, 9, 0 };
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

#endif

#if 1

//使用回调函数模拟实现qsort，使用冒泡排序
int int_cmp(const void *p1, const void *p2)
{
	return (*(int*)p1 > *(int*)p2);
}

void _swap(void *p1, void *p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble_sort(void *base, int count, int size, int(*cmp)(void*, void*))
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j*size, (char*)base + (j + 1)*size)>0)
			{
				_swap((char*)base + j*size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}

int main()
{
	//int arr[] = { 3, 1, 2, 7, 5, 6, 4, 8, 9, 0 };
	char *arr[] = { "aaaa", "dddd", "cccc", "bbbb" };
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%s ", arr[i]);
	}
	system("pause");
	return 0;
}

#endif