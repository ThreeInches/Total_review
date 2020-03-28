#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main7()
{
	int c;
	FILE *pfile = fopen("test123.txt", "r");
	if (!pfile)
	{
		perror("Filr opening failed");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(pfile)) != EOF)
	{
		putchar(c);
	}
	if (ferror(pfile))
	{
		puts("I/O error when reading");
	}else if (feof(pfile))
	{
		puts("End of file reached successfully");
	}
	fclose(pfile);
	pfile = NULL;
	system("pause");
	return 0;
}