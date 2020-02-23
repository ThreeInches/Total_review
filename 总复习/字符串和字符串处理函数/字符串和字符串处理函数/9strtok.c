#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
//strtok 将字符串按delimiters 分隔为令牌
int main9()
{
	char str[] = "-This , a sample strling.";
	char *pstr;
	printf("splitting string \ %s \"into tokens:\n", str);
	pstr = strtok(str, ",.-");
	while (pstr != NULL)
	{
		printf("%s\n", pstr);
		pstr = strtok(NULL, ",.-");
	}
	system("pause");
	return  0;
}
#endif

#if 0
int main()
{
	char *p = "1330782530@qq.com";
	const char* sep = ".@";
	char arr[30];
	char *str = NULL;
	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}
	system("pause");
	return  0;
}
#endif