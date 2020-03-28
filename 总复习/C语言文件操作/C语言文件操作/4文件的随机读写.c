#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//fseek example
//fseek根据文件指针的位置和偏移量来定位指针文件
int main4()
{
	FILE *pfile;
	pfile = fopen("fseek example.txt", "wb");
	fputs("This is an apple.", pfile);
	fseek(pfile, 9, SEEK_SET);
	fputs("sam", pfile);
	fclose(pfile);
	pfile = NULL;
	system("pause");
	return 0;
}