#include <stdio.h>
#include <stdlib.h>

#define PRINT(FORMAT, VALUE)\
	printf("the value of "#VALUE" is "FORMAT"\n", VALUE);

int main6()
{
	int i = 10;
	PRINT("%d", 10);
	PRINT("%d", i + 3);
	system("pause");
	return 0;
}
