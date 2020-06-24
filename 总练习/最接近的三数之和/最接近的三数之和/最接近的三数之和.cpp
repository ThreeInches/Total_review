#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Solution
{
public:
	int threeSumClosest(vector<int>& nums, int target)
	{
		sort(nums.begin(), nums.end());
		int ans = nums[0] + nums[1] + nums[2];

		for (int i = 0; i < nums.size() - 2; i++)
		{
			int start = i + 1;
			int end = nums.size() - 1;
			while (start < end)
			{
				int sum = nums[start] + nums[end] + nums[i];
				if (abs(sum - target) < abs(ans - target))
				{
					ans = sum;
				}
				if (sum == target)
				{
					return sum;
				}
				else if (sum < target)
				{
					start++;
				}
				else
				{
					end--;
				}
			}
		}

		return ans;
	}
};


int main()
{
	Solution a;
	vector<int> b{ 0, 2, 1, -3 };
	cout << a.threeSumClosest(b, 1);
	system("pause");
	return 0;
}
