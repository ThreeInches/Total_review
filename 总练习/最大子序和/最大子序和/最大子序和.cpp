#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int maxSubArray(vector<int>& nums)
	{
		int res = nums[0];
		int sum = 0;
		if (nums.size() == 0)
		{
			return 0;
		}

		for (int i = 0; i < nums.size(); i++)
		{
			sum = max(nums[i] + sum, nums[i]);
			res = max(res, sum);
		}

		return res;
	}
};

int main()
{
	Solution a;
	vector<int> b{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	cout << a.maxSubArray(b) << endl;
	system("pause");
	return 0;
}
