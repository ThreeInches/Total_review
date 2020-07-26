#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Solution
{
public:
	void swap(string& str, int i, int j)
	{
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}

	bool isExist(vector<string>& res, string& str)
	{
		for (auto it = res.begin(); it != res.end(); it++)
		{
			if (*it == str)
			{
				return true;
			}
		}
		return false;
	}

	void PermutationCore(string& str, int start, vector<string> res)
	{
		if (start == str.length() - 1)
		{
			if (!isExist(res, str))
			{
				res.push_back(str);
			}
		}

		for (int i = start; i < str.size(); i++)
		{
			swap(str, start, i);
			PermutationCore(str, start + 1, res);
			swap(str, start, i);
		}
	}

	vector<string> Permutation(string str)
	{
		vector<string> res;

		if (str.length() == 1)
		{
			return res;
		}

		if (str.length() > 0)
		{
			PermutationCore(str, 0, res);
			sort(res.begin(), res.end());
		}

		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
