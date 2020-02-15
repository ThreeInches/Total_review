#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 12


int main4()
{
	char ch1[SIZE] = "Hello World!";
	char ch2[SIZE] = "$$$$$$$$$$$";
	int left = 0;
	int right = SIZE - 1;
	while (left <= right)
	{
		ch1[left] = ch2[left];
		ch1[right] = ch2[right];
		left++;
		right--;
		printf("%s\n", ch1);
		system("cls");
	}
	system("pause");
	return 0;
}