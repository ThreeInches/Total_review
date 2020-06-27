#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int firstMissingPositive(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		int i = 0;
		for (; i < nums.size(); i++)
		{
			if (nums[i] >= 1)
			{
				break;
			}
		}

		int count = 1;
		for (int j = i; j < nums.size();)
		{
			if (count != nums[j])
			{
				break;
			}
			while (j < nums.size() && count == nums[j])
			{
				j++;
			}

			count++;
		}

		return count;
	}
};

int main()
{
	Solution a;

	vector<int> b{ 1, 2, 0 };
	vector<int> c{ 3, 4, -1, 1 };
	vector<int> d{ 7, 8, 9, 11, 12 };

	cout << a.firstMissingPositive(b) << endl;
	cout << a.firstMissingPositive(c) << endl;
	cout << a.firstMissingPositive(d) << endl;

	system("pause");
	return 0;
}
