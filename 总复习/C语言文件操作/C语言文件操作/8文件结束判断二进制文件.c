#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

enum 
{
	SIZE = 5
};

int main8()
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t res_code = 0;
	FILE *pfile = fopen("test.bin", "wb");
	fwrite(a, sizeof(*a), SIZE, pfile);
	fclose(pfile);
	pfile = NULL;

	pfile = fopen("test.bin", "rb");
	while (res_code = fread(&b, sizeof(double), 1, pfile) >= 1)
	{
		printf("%lf\n", b);
	}
	if (feof(pfile))
	{
		printf("Error reading test.bin:unexpected end of file\n");
	}
	else if (ferror(pfile))
	{
		perror("Error reading test.bin\n");
	}
	fclose(pfile);
	pfile = NULL;
	system("pause");
	return 0;
}