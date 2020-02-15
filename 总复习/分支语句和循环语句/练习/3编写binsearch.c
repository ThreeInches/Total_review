#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (v[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int main3()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", binsearch(4, arr, 10));
	system("pause");
	return 0;
}