#include <stdio.h>
#include <stdlib.h>

#define __DEBUG__ 0

int main11()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		#if __DEBUG__
		printf("%d\n", arr[i]);
		#endif
	}
	system("pause");
	return 0;
}