#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char *destination, const char *source)
{
	char *res = destination;
	assert(destination);
	assert(source);
	while (*destination)
	{
		destination++;
	}
	while (*destination++ = *source++)
	{
		;
	}
	return res;
}

int main3()
{
	char ch[20] = "\0";
	my_strcat(ch, "I ");
	my_strcat(ch, "am ");
	my_strcat(ch, "a ");
	my_strcat(ch, "student!");
	puts(ch);

	putchar("\n");

	char str[80] = "\0";
	my_strcat(str, "these ");
	my_strcat(str, "strings ");
	my_strcat(str, "are ");
	my_strcat(str, "concatenated.");
	puts(str);
	system("pause");
	return 0;
}