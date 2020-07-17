#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//class Solution
//{
//public:
//	int searchInsert(vector<int>& nums, int target)
//	{
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] >= target)
//			{
//				return i;
//			}
//		}
//
//		return nums.size();
//	}
//};

class Solution
{
public:
	int searchInsert(vector<int>& nums, int target)
	{
		return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
	}
};

int main()
{
	Solution a;
	vector<int> v{ 1, 3, 5, 6 };
	cout << a.searchInsert(v, 5) << endl;
	cout << a.searchInsert(v, 2) << endl;
	cout << a.searchInsert(v, 7) << endl;
	cout << a.searchInsert(v, 0) << endl;
	system("pause");
	return 0;
}
