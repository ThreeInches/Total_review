#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d ", i);
		i++;
	}
	system("pause");
	return 0;
}
#else
int main5()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		{
			continue;
		}
		printf("%d ", i);
	}
	system("pause");
	return 0;
}
#endif