#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int findKthLargest(vector<int>& nums, int k)
	{
		int res;
		if (nums.empty())
		{
			return 0;
		}

		sort(nums.begin(), nums.end());
		int big = nums[nums.size() - 1];
		for (int i = nums.size() - 1; i >= k; i--)
		{
			res = nums[i];
		}

		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
