#include <stdio.h>
#include <stdlib.h>

void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; k++)
	{
		count++;
	}
	int M = 10;
	while (M--)
	{
		count++;
	}
	printf("%d\n", count);
}

int main1()
{
	Func2(1000);
	system("pause");
	return 0;
}