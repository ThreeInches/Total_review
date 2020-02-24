#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Student
{
	char name[20];
	int age;
}person, person_copy;

void* my_memcpy(void *destination, void *source, size_t num)
{
	void *res = destination;
	assert(destination);
	assert(source);
	while (num--)
	{
		*(char *)destination = *(char *)source;
		destination = (char *)destination + 1;
		source = (char *)source + 1;
	}
	return res;
}

int main6()
{
	char myname[] = "Pierre de Fermat";

	/*using memcpy to copy string:*/
	my_memcpy(person.name, myname, sizeof(myname)+1);

	person.age = 23;
	/*using memcpy to copy structure:*/
	my_memcpy(&person_copy, &person, sizeof(person));

	printf("person_copy:%s,%d\n", person_copy.name, person_copy.age);
	system("pause");
	return 0;
}