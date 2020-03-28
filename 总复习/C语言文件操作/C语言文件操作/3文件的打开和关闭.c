#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//fopen fclose example
int main3()
{
	FILE *pfile;
	pfile = fopen("fopen example.txt", "w");
	if (pfile)
	{
		fputs("fopen example!", pfile);
		fclose(pfile);
	}
	system("pause");
	return 0;
}