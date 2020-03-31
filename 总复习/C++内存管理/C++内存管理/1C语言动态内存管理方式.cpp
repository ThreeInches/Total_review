#include <stdio.h>
#include <stdlib.h>

//malloc开辟size个大小的内存空间
//calloc开辟num个size大小的内存空间
//realloc在*ptr后面开辟size个大小的内存空间
int main()
{
	int* p1 = (int*)malloc(sizeof(int));
	free(p1);
	int* p2 = (int*)calloc(4, sizeof(int));
	int* p3 = (int*)realloc(p2, sizeof(int)* 10);
	free(p3);
	system("pause");
	return 0;
}
