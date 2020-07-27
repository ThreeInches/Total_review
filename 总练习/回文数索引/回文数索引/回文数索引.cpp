#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string& s)
{
	int left = 0;
	int right = s.size() - 1;

	while (left < right)
	{
		if (s[left] == s[right])
		{
			left++;
			right--;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int deleteLetter(string& s)
{
	int left = 0;
	int right = s.size() - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			if (s[left] != s[right])
			{
				left++;
			}
			if (s[left] == s[right])
			{
				return --left;
			}
			if (s[left] != s[right])
			{
				left--;
				right--;
			}
			if (s[left] == s[right])
			{
				return ++right;
			}
		}
		else
		{
			left++;
			right--;
		}
	}
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		if (isPalindrome(s))
		{
			cout << -1 << endl;
		}
		else
		{
			cout << deleteLetter(s) << endl;
		}
	}
	system("pause");
	return 0;
}
