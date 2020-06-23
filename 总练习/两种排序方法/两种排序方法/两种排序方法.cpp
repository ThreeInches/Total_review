#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool lexicographically(vector<string>& str, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] > str[i + 1])
		{
			return false;
		}
	}

	return true;
}

bool lengths(vector<string>& str, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i].size() > str[i + 1].size())
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	vector<string> str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		str.push_back(s);
	}
	if ((lexicographically(str, n)) && (lengths(str, n)))
	{
		cout << "both" << endl;
	}
	if (!(lexicographically(str, n)) && !(lengths(str, n)))
	{
		cout << "none" << endl;
	}
	if (!(lexicographically(str, n)) && (lengths(str, n)))
	{
		cout << "lengths" << endl;
	}
	if ((lexicographically(str, n)) && !(lengths(str, n)))
	{
		cout << "lexicographically" << endl;
	}
	system("pause");
	return 0;
}
