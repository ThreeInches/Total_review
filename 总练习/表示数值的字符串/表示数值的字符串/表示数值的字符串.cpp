#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	bool isNumber(string& s)
	{
		int len = s.size();
		int num = 0;
		int point = 0;
		int exp = 0;
		while (s[0] == ' ' && s.length())
		{
			s.erase(0, 1);
		}
		while (s[s.length() - 1] == ' ' && s.length())
		{
			s.erase(s.length() - 1, 1);
		}

		if (!s.length())
		{
			return false;
		}

		for (int i = 0; i < len; i++)
		{
			if (s[i] == ' ')
			{
				return false;
			}
			else if (s[i] == '+' || s[i] == '-')
			{
				if (i != 0 && s[i - 1] == 'e')
				{
					return false;
				}
			}
			else if (s[i] == '.')
			{
				if (point > 0 || exp > 0)
				{
					return false;
				}
				point++;
			}
			else if (s[i] == 'e')
			{
				if (num == 0 || exp > 0)
				{
					return false;
				}
				exp++;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				num++;
			}
		}
		if (num == 0 || s[len - 1] == 'e' || s[len - 1] == '+' || s[len - 1] == '-')
		{
			return false;
		}
		return true;
	}
};

int main()
{
	string str;
	Solution a;
	getline(cin, str);
	cout << a.isNumber(str) << endl;
	return 0;
}