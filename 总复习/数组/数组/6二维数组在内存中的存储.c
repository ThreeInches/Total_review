#include <stdio.h>
#include <stdlib.h>

int main6()
{
	int arr[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("7arr[%d][%d] = %p ", i, j, &arr[i][j]);
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}