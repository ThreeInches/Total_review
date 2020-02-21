#include <stdio.h>
#include <stdlib.h>

//区分数组指针和指针数组
int main3()
{
	int *p1[10];//指针数组
	int(*p2)[10];//数组指针
	system("pause");
	return 0;
}

//&数组名和数组名的区别
int main32()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	system("pause");
	return 0;
}
//&数组名表示的数组的地址
//数组名表示的数组首元素的地址
int main33()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);
	system("pause");
	return 0;
}