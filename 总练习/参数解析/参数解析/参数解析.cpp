#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	int flag = 1;
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
			{
				count++;
			}
			if (str[i] == '"')
			{
				for (; i != '"'; i++);
			}
		}

		cout << count + 1 << endl;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '"')
			{
				flag ^= 1;
			}
			if (str[i] != ' '&&str[i] != '"')
			{
				cout << str[i];
			}
			if (str[i] == ' '&& (!flag))
			{
				cout << str[i];
			}
			if (str[i] == ' ' && flag)
			{
				cout << endl;
			}
		}

		cout << endl;
	}
	system("pause");
	return 0;
}
