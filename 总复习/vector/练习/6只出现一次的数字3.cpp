//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> singleNumber(vector<int>& nums)
//	{
//		vector<int> res;
//		int i, j;
//
//		sort(nums.begin(), nums.end());
//
//		for (i = 0, j = 1; j < nums.size(); i += 2, j += 2)
//		{
//			if (nums[i] != nums[j])
//			{
//				res.push_back(nums[i]);
//				nums.erase(nums.begin() + i);
//				break;
//			}
//		}
//
//		for (i = 0, j = 1; j < nums.size(); i += 2, j += 2)
//		{
//			if (nums[i] != nums[j])
//			{
//				res.push_back(nums[i]);
//				return res;
//			}
//		}
//
//		res.push_back(nums[nums.size() - 1]);
//
//		return res;
//	}
//
//	void show(vector<int>& res)
//	{
//		for (int i = 0; i < res.size(); i++)
//		{
//			cout << res[i] << ' ';
//		}
//	}
//};
//
//int main()
//{
//	Solution a;
//	vector<int> nums1{ 1, 2, 1, 3, 2, 5 };
//
//	a.show(a.singleNumber(nums1));
//	system("pause");
//	return 0;
//}
