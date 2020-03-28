#include <stdio.h>
#include <stdlib.h>

int main8()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d ", strlen(a));
	system("pause");
	return 0;
}