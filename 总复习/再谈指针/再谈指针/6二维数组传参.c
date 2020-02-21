#include <stdio.h>
#include <stdlib.h>

void test1(int arr[3][5])
{

}

void test2(int arr[][5])
{

}

//void test3(int arr[][])
//{
//
//}

void test4(int *arr)
{

}

void test5(int **arr)
{

}

void test6(int *arr[5])
{

}

void test7(int (*arr)[5])
{

}

int main6()
{
	int arr[3][5] = { 0 };
	test1(arr);
	test2(arr);
	//test3(arr);
	test4(arr);
	test5(arr);
	test6(arr);
	test7(arr);
	system("pause");
	return 0;
}