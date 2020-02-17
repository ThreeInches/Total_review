#include <stdio.h>
#include <stdlib.h>

#if 0
int main2()
{
	int num = -1;
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
#else
int main2()
{
	int num = -1;
	int count = 0;
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
#endif