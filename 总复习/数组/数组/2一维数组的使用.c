#include <stdio.h>
#include <stdlib.h>

int main2()
{
	//[]称为小标引用操作符

	int arr1[10] = { 0 };//数组的不完全初始化
	int size = sizeof(arr1) / sizeof(arr1[0]);//计算数组的大小
	//对数组的内容进行赋值
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = i;
	}
	//输出数组的内容
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	system("pause");
	return 0;
}