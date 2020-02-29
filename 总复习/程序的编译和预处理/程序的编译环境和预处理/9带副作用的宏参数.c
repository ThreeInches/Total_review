#include <stdio.h>
#include <stdlib.h>

//x+1;不带副作用
//x++;带有副作用
#define MAX(a, b) ((a)>(b)?a:b)

int main9()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x = %d y = %d z = %d\n", x, y, z);
	system("pause");
	return 0;
}