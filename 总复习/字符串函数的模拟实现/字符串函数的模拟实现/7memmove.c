#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void* my_memmove(void *destination, void *source, size_t num)
{
	void *res = destination;
	assert(destination);
	assert(source);
	if (destination <= source || (char *)destination >= ((char *)source + num))
	{
		while (num--)
		{
			*(char *)destination = *(char *)source;
			destination = (char *)destination + 1;
			source = (char *)source + 1;
		}
	}
	else
	{
		destination = (char *)destination + num - 1;
		source = (char *)source + num - 1;
		while (num--)
		{
			*(char *)destination = *(char *)source;
			destination = (char *)destination - 1;
			source = (char *)source - 1;
		}
	}
	return res;
}

int main7()
{
	char str[] = "memmove can be very useful......";
	my_memmove(str + 20, str + 15, 11);
	puts(str);
	system("pause");
	return 0;
}