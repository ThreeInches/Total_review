#include <stdio.h>
#include <stdlib.h>

typedef struct st_type4
{
	int i;
	int *p_a;
}type_a4;

int main7()
{
	type_a4 *p = malloc(sizeof(type_a4));
	p->i = 100;
	p->p_a = (int *)malloc(p->i*sizeof(int));
	for (int i = 0; i < 100; i++)
	{
		p->p_a[i] = i;
		printf("%d ", p->p_a[i]);
	}
	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
	system("pause");
	return 0;
}