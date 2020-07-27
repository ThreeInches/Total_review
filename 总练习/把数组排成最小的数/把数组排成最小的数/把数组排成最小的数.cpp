#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
	static bool comp(int x, int y)
	{
		string sx = to_string(x);
		string sy = to_string(y);

		string A = sx;
		A += sy;

		string B = sy;
		B += sx;

		return A < B;
	}

	string PrintMinNumber(vector<int> numbers)
	{
		string res = "";

		if (numbers.empty())
		{
			return res;
		}

		sort(numbers.begin(), numbers.end(), comp);
		for (int i = 0; i < numbers.size(); i++)
		{
			res += to_string(numbers[i]);
		}

		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
