#include <stdio.h>
#include <stdlib.h>


//void test1(int arr[])
//{
//	printf("%d ", arr[0]);
//}
//
//void test1(int arr[10])
//{
//	printf("%d ", arr[0]);
//}
//
//void test1(int *arr)
//{
//	printf("%d ", arr[0]);
//}
//
//void test2(int *arr[20])
//{
//	printf("%d ", arr[0]);
//}
//
//void test2(int **arr)
//{
//	printf("%d ", arr[0]);
//}

int main5()
{
	int arr1[10] = { 0 };
	int *arr2[20] = { 0 };

	test1(arr1);
	test2(arr2);
	system("pause");
	return 0;
}