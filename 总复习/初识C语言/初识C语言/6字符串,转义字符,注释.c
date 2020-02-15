#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x + y;
}
/*C语言风格注释
int Sub(int x, int y)
{
	return x-y;
}
*/

int main6()
{
	"Hello,World!";//字符串字面值（字符串）
	//字符串的结束标志是\0是结束标志，不算做字符串内容。

	//在屏幕上打印一个目录C:\code\test.c
	printf("C:\\code\\test.c\n");

	//在屏幕上打印一个单引号'
	printf("%c\n", '\'');
	//在屏幕上打印一个字符串，字符串的内容是一个双引号"
	printf("%s\n", "\"");

	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("C:\test\328\test.c"));

	//C++注释风格
	//int a = 10;
	//调用Add函数，完成加法
	printf("%d\n", Add(1, 2));
	system("pause");
	return 0;
}