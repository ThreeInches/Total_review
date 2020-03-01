#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int BinarySearch(int *a, int n, int x)
{
	assert(a);
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < x)
		{
			left = mid + 1;
		}
		else if (a[mid]> x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}

int main6()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int res = BinarySearch(arr, 10, 7);
	printf("%d\n", res);
	system("pause");
	return 0;
}