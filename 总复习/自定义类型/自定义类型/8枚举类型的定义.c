#include <stdio.h>
#include <stdlib.h>

//enum默认从0开始，依次递增1


//枚举的优点：
/*
1、增加代码的可读性和可维护性
2、和#define定义的标识符比较，枚举有类型检查，更加严谨
3、防止了命名污染（封装）
4、便与调试，使用过方便，一次可以定义多个常量
*/
enum Day//星期
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Sex//性别
{
	MALE,
	FEMALE,
	SECRET
};

enum Color//颜色
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Purple
};

int main8()
{

	system("pause");
	return 0;
}