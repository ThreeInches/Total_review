#include <stdio.h>
#include <stdlib.h>

int main8()
{
	int flag1 = 0;
	int flag2 = 0;
	//whileÓï¾ä
	while (flag1 < 10)
	{
		printf("1Hello,World!\n");
		flag1++;
	}
	//forÓï¾ä
	for(int i = 0; i < 10; i++)
	{
		printf("2Hello,World!\n");
	}
	//do-whileÓï¾ä
	do 
	{
		printf("3Hello,World!\n");
		flag2++;
	} while (flag2 < 10);
	system("pause");
	return 0;
}