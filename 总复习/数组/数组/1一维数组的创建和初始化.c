#include <stdio.h>
#include <stdlib.h>

int main1()
{
	//type_t arr_name [const_n]
	//type_t 是数组的元素类型
	//const_t 是一个常量表达式，用来指定数组的大小

	int arr1[10];

	/*int count = 10;
	int arr2[count];*///违法创建
	 
	int arr3[10];
	float arr4[10];
	double arr5[10];

	int arr6[10] = { 1, 2, 3 };
	int arr7[] = { 1, 2, 3, 4 };
	int arr8[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	char arr9[10] = { 'a', 98, 'c' };
	char arr10[10] = { 'a', 'b', 'c' };
	char arr11[] = "abcdef";
	
	system("pause");
	return 0;
}