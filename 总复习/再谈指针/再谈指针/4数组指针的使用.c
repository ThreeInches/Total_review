#include <stdio.h>
#include <stdlib.h>

//不常用的数组指针使用方法
int main4()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int(*p)[10] = &arr;//把数组的地址赋值给指针变量p
	system("pause");
	return 0;
}

void Print_arr1(int arr[3][5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void Print_arr2(int(*arr)[5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main41()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	Print_arr1(arr, 3, 5);
	Print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}