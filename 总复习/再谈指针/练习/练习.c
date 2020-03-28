#include <stdio.h>
#include <stdlib.h>

int main1()
{
	//str3和str4是同一个常量的字符串，C/C++会把常量字符串存储到单独的一个内存区域，当几个指针指向同一个字符串的时候，他们指向同一块内存；故str3 == str4
	//str1和str2是初始化不同的数组时候就会开辟不同的内存。故str1 ！= str2
	char str1[] = "Hello,World!";
	char str2[] = "Hello,World!";
	char *str3 = "Hello,World!";
	char *str4 = "Hello,World!";

	if (str1 == str2)
	{
		printf("str1 == str2\n");
	}
	else
	{
		printf("str1 != str2\n");
	}

	if (str3 == str4)
	{
		printf("str3 == str4\n");
	}
	else
	{
		printf("str3 != str4\n");
	}


	system("pause");
	return 0;
}