#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<string> dealString(string str)
	{
		vector<string> res;
		string tmp;
		if (str.empty())
		{
			return res;
		}
		int i = 0;
		int index = 0;
		while (i < str.size())
		{
			if (str[i] != ' ')
			{
				i++;
				
			}
			tmp = str.substr(index, i);
			res.push_back(tmp);
			if (str[i] == ' ')
			{
				index = i + 1;
				i = index;
			}
		}
		return res;
	}

	bool testMatch(string pattern, string str)
	{
		vector<string> p;
		vector<string> s;

	}
};

int main()
{
	Solution a;

	string s = "i am a student";
	vector<string> res;
	res = a.dealString(s);
	for (auto& e : res)
	{
		cout << e << ' ';
	}
	return 0;
}