#include <stdio.h>
#include <stdlib.h>

int main3()
{
	int arr[10] = { 0 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	system("pause");
	return 0;
}