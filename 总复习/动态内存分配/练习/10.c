#include <stdio.h>
#include <stdlib.h>

void Test10(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "Hello,World!");
	free(str);
	//str = NULL;
	if (str)
	{
		strcpy(str, "123,456!");
		puts(str);
	}
}

int main10()
{
	Test10();
	system("pause");
	return 0;
}