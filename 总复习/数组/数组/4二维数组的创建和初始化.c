#include <stdio.h>
#include <stdlib.h>

int main4()
{
	//二维数组的创建
	int arr1[3][4];
	char arr2[3][5];
	double arr3[2][4];
	//二维数组的初始化
	int arr4[3][4] = { 1, 2, 3, 4 };
	int arr5[3][4] = { { 1, 2 }, { 4, 5 } };
	int arr6[][4] = { { 2, 3 }, { 4, 5 } };
	system("pause");
	return 0;
}