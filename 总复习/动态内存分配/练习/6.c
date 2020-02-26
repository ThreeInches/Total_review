#include <stdint.h>
#include <stdlib.h>

//动态内存开辟的忘记释放(会造成内存泄漏)
void test6()
{
	int *p = (int *)malloc(100);
	if (p)
	{
		*p = 20;
	}
}

int main6()
{
	test6();
	system("pause");
	return 0;
}