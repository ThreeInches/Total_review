#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//将source位置开始向后复制num个字节得到数据到destination中。
//memmove和memcpy的区别是memcpy处理源内存块和目标内存块的时候不可以重叠，若是发生重叠，导致复制结果未定义。
struct Student
{
	char name[20];
	int age;
}person, person_copy;

int main12()
{
	char myname[] = "Pierre de Fermat";

	/*using memcpy to copy string:*/
	memcpy(person.name, myname, sizeof(myname) + 1);
	
	person.age = 23;
	/*using memcpy to copy structure:*/
	memcpy(&person_copy, &person, sizeof(person));

	printf("person_copy:%s,%d\n", person_copy.name, person_copy.age);
	system("pause");
	return 0;
}