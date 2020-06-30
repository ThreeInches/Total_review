#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int findKthLargest(vector<int>& nums, int k)
	{
		if (nums.empty())
		{
			return 0;
		}

		sort(nums.begin(), nums.end());

		return nums[nums.size() - k];
	}
};

int main()
{
	Solution a;
	vector<int> b{ 3, 2, 1, 5, 6, 4 };
	vector<int> c{ 3, 2, 3, 1, 2, 4, 5, 5, 6 };

	cout << a.findKthLargest(b, 2) << endl;
	cout << a.findKthLargest(c, 4) << endl;
	system("pause");
	return 0;
}
