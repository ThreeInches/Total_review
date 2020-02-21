#include <stdio.h>
#include <stdlib.h>

//一般使用
int main1()
{
	char ch = 'a';
	char *pch = &ch;
	*pch = 'b';
	system("pause");
	return 0;
}

int main11()
{
	//把一个常量字符的首字符H存放在指针变量pstr中
	char *pstr = "Hello,World!";
	printf("%s\n", pstr);
	system("pause");
	return 0;
}