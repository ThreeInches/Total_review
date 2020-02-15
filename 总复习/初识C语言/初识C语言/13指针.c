#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
	int num = 10;
	&num;//取出num的地址
	printf("%p\n", &num);
	system("pause");
	return 0;
}
#endif
//指针的使用实例
#if 0
int main()
{
	int num = 10;
	int* p = &num;
	*p = 20;
	printf("%d\n", num);
	system("pause");
	return 0;
}
#endif
//指针的推广
#if 0
int main()
{
	char ch = 'w';
	char* pch = &ch;
	*pch = 'q';
	printf("%c\n", ch);
	system("pause");
	return 0;
}
#endif
//指针变量的大小
//指针大小在32位平台是4个字节，64位平台是8个字节
#if 0
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long double*));

	printf("%d\n", sizeof(char*));


	system("pause");
	return 0;
}
#endif