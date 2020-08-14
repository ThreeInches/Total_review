#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < (nums.size() - 1) && nums[i] < 0; i++)
		{
			if (i > 0 && nums[i] == nums[i - 1])
			{
				continue;
			}
			int j = i + 1;
			int k = nums.size() - 1;
			for (; j < k && nums[k] >= 0; )
			{
				if (nums[j] + nums[k] == -nums[i])
				{
					res.push_back({ nums[i], nums[j], nums[k] });
					while (j < k && nums[j] == nums[j + 1])
					{
						j++;
					}
					while (j < k && nums[k] == nums[k - 1])
					{
						k--;
					}
					j++;
					k--;
				}
				else if (nums[j] + nums[k] < -nums[i])
				{
					j++;
				}
				else
				{
					k--;
				}
			}
		}
		return res;
	}
};

int main()
{

	return 0;
}