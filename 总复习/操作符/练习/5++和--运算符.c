#include <stdio.h>
#include <stdlib.h>

//前置++和前置--
int main5()
{
	int a = 10;
	int x = ++a;
	int y = --a;
	printf("%d\n", y);
	system("pause");
	return 0;
}

//后置++和--
int main5()
{
	int a = 10;
	int x = a++;
	int y = a--;
	printf("%d\n", y);
	system("pause");
	return 0;
}