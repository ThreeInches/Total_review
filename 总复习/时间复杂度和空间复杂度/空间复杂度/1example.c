#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void BubbleSort(int *arr, int n)
{
	assert(arr);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (arr[j - 1]>arr[j])
			{
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 2, 3, 5, 4, 1, 6, 7, 9, 8, 0 };
	BubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return  0;
}