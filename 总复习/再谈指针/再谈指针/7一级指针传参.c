#include <stdio.h>
#include <stdlib.h>

void Print(int *parr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(parr + i));
	}
}

int main7()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *parr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	//一级指针parr，传给函数
	Print(parr, size);
	system("pause");
	return 0;
}