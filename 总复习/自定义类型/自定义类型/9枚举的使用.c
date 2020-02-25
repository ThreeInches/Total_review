#include <stdio.h>
#include <stdlib.h>

enum Color1
{
	Red = 1,
	Orange = 2,
	Yellow = 3,
	Green = 4,
	Blue = 5,
	Purple = 7
};

int main9()
{
	enum Color1 clr = Green;
	printf("%d\n", clr);
	system("pause");
	return 0;
}