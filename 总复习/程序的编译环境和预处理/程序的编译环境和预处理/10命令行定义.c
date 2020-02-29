#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 999

int main10()
{
	int array[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = i;
	}
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	system("pause");
	return 0;
}