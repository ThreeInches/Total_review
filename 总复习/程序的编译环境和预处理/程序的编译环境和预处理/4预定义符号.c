#include <stdio.h>
#include <stdlib.h>

int main4()
{
	printf("file:%s line:%d date:%d time:%d\n", __FILE__, __LINE__, __DATE__, __TIME__);
	system("pause");
	return 0;
}