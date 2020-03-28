#include <stdio.h>
#include <stdlib.h>

int main10()
{
	int n = 9;
	float *pfloat = (float*)&n;
	printf("n的值为;%d\n", n);
	printf("*pfloat的值为：%f\n", *pfloat);

	*pfloat = 9.0;
	printf("n的值为：%d\n", n);
	printf("*pfloat的值：%f\n", *pfloat);
	system("pause");
	return 0;
}