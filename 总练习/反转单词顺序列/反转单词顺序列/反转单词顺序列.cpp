#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	void Reverse(string& str, int i, int j)
	{
		while (i < j)
		{
			char tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
			i++;
			j--;
		}
	}

	string ReverseSentence(string str)
	{
		if (str.size() == 0)
		{
			return str;
		}

		int i = 0;
		int j = 0;
		int len = str.size();
		while (i < len)
		{
			while (i < len && str[i] != ' ')
			{
				i++;
			}

			Reverse(str, j, i - 1);

			while (i < len && str[i] == ' ')
			{
				i++;
			}
			j = i;
		}

		Reverse(str, j, i - 1);
		Reverse(str, 0, i - 1);

		return str;
	}
};
int main()
{

	system("pause");
	return 0;
}
