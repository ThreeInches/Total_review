#include <stdio.h>
#include <stdlib.h>

int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}

int main()
{
	if (check_sys())
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