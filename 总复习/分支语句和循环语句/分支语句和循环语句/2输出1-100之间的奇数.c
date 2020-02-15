#include <stdio.h>
#include <stdlib.h>

int main2()
{
	for (int i = 1; i < 101; i++)
	{
		if ((i % 2) != 0)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}