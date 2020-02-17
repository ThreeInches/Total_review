#include <stdio.h>
#include <stdlib.h>

int main5()
{
	int arr[3][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = i + j;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}