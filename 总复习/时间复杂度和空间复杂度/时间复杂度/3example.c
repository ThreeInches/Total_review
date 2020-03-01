#include <stdio.h>
#include <stdlib.h>

void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < N; k++)
	{
		count++;
	}
	printf("%d\n", count);
}

int main3()
{
	Func4(100);
	system("pause");
	return 0;
}