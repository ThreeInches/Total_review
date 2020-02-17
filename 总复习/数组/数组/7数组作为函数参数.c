#include <stdio.h>
#include <stdlib.h>

void Bubble_sort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] <= arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main7()
{
	int arr[] = { 3, 4, 2, 1, 7, 6, 8, 9, 5, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}