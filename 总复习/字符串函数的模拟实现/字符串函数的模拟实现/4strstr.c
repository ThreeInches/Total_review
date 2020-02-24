#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char *destination, const char *source)
{
	assert(destination);
	assert(source);

	char *pdestination = (char *)destination;
	char *psource = (char *)source;
	char *str = NULL;

	if (*source == '\0')
	{
		return NULL;
	}
	while (*pdestination)
	{
		str = pdestination;
		psource = source;
		while (*str && *psource && (*str == *psource))
		{
			str++;
			psource++;
		}
		if (*psource == '\0')
		{
			return pdestination;
		}
		pdestination++;
	}

}

int main4()
{
	char str1[] = "This is a simple string";
	char *pstr;
	pstr = my_strstr(str1, "simple");
	strncpy(pstr, "simple", 6);
	puts(str1);	system("pause");
	return 0;
}