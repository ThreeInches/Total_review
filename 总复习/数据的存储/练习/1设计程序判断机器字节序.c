#include <stdio.h>
#include <stdlib.h>

int check_sys1()
{
	int i = 1;
	return (*(char*)&i);
}

int main1()
{
	if (check_sys1())
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	system("pause");
	return 0;
}