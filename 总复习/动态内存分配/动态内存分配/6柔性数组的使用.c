#include <stdio.h>
#include <stdlib.h>

typedef struct st_type3
{
	int i;
	int a[];//柔性数组成员
}type_a3;

int main6()
{
	int i = 0;
	type_a3 *p = (type_a3 *)malloc(sizeof(type_a3)+100 * sizeof(int));
	p->i = 100;
	for (int i = 0; i < 100; i++)
	{
		p->a[i] = i;

		printf("%d ", p->a[i]);
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}