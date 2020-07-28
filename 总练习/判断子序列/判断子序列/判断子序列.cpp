#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	bool isSubsequence(string s, string t)
	{
		int i = 0;
		int j = 0;
		int m = s.size();
		int n = t.size();
		while (i < m && j < n)
		{
			if (s[i] == t[j])
			{
				i++;
			}
			j++;
		}

		if (i == m)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{

	system("pause");
	return 0;
}
