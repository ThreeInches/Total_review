#include <stdio.h>
#include <stdlib.h>

const char *my_strchr(const char *str, int character)
{
	int count = 0;
	char *res = (char *)str;
	while (*res != '\0')
	{
		if (*res == character)
		{
			printf("%d\n", count);
			return res;
		}
		res++;
		count++;
	}
	return NULL;
}

int main4()
{
	char *str[] = { 0 };
	my_strchr("Hello,World!", 'd');
	
	system("pause");
	return 0;
}