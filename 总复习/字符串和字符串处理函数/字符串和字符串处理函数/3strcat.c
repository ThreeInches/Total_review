#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcat  将source追加到destination中
int main3()
{
	char ch[20] = "\0";
	strcat(ch, "I ");
	strcat(ch, "am ");
	strcat(ch, "a ");
	strcat(ch, "student!");
	puts(ch);

	putchar("\n");

	char str[80] = "\0";
	strcpy(str, "these ");
	strcat(str, "strings ");
	strcat(str, "are ");
	strcat(str, "concatenated.");
	puts(str);
	system("pause");
	return 0;
}