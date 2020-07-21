#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	void replaceSpace(char *str, int length)
	{
		int count = 0;
		int i = 0;
		for (; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
			{
				count++;
			}
		}
		int ptr1 = i;
		int ptr2 = i + 2 * count;
		while (ptr1 != -1 && ptr2 != -1)
		{
			if (str[ptr1] != ' ')
			{
				str[ptr2] = str[ptr1];
				ptr1--;
				ptr2--;
			}
			else
			{
				str[ptr2] = '0';
				ptr2--;
				str[ptr2] = '2';
				ptr2--;
				str[ptr2] = '%';
				ptr2--;
				ptr1--;
			}
		}
	}
};

int main()
{
	Solution a;
	char* str = "We are student!";
	a.replaceSpace(str, 15);
	printf("%s\n", str);
	system("pause");
	return 0;
}
