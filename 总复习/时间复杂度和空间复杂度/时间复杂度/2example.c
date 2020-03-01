#include <stdio.h>
#include <stdlib.h>

void Func3(int N, int M)
{
	int count = 0;
	for (int k = 0; k < M; k++)
	{
		count++;
	}
	for (int k = 0; k < N; k++)
	{
		count++;
	}
	printf("%d\n", count);
}

int main2()
{
	Func3(1000, 2000);
	system("pause");
	return 0;
}