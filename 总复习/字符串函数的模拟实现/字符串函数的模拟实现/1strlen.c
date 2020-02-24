#include <stdio.h>
#include <stdlib.h>

//方式一：计数器方式
size_t my_strlen1(char *str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//方式二：不创建临时变量的递归实现
size_t my_strlen2(char *str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen2(str + 1);
	}
	return 0;
}

//方式三：指针-指针实现
size_t my_strlen3(char *str)
{
	char *p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;

}

int main1()
{
	const char *str1 = "abcdef";
	const char *str2 = "abc";
	if (my_strlen1(str1) > my_strlen1(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	if (my_strlen2(str1) > my_strlen2(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	if (my_strlen3(str1) > my_strlen3(str2))
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2");
	}
	system("pause");
	return 0;
}