//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//#if 0
//	int singleNumber(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < nums.size(); i += 3)
//		{
//			if (i = nums.size() - 1)
//			{
//				return nums[i];
//			}
//			if (nums[i] != nums[i + 1] || nums[i] != nums[i + 2])
//			{
//				return nums[i];
//			}
//		}
//		return -1;
//	}
//#else
//	int singleNumber(vector<int>& nums)
//	{
//		int i, j;
//		sort(nums.begin(), nums.end());
//		for (i = 0, j = 1; j < nums.size(); i += 3, j += 3)
//		{
//			if (nums[i] != nums[j])
//			{
//				return nums[i];
//			}
//		}
//		return nums[nums.size() - 1];
//	}
//#endif
//};
//
//int main()
//{
//	Solution a;
//	vector<int> nums1{ 2, 2, 3, 2 };
//	vector<int> nums2{ 0, 1, 0, 1, 0, 1, 99 };
//	cout << a.singleNumber(nums1) << endl;
//	cout << a.singleNumber(nums2) << endl;
//	system("pause");
//	return 0;
//}
