//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution
//{
//public:
//	int removeDuplicates(vector<int>& nums)
//	{
//		int size = 0;
//
//		if (nums.empty())
//		{
//			return 0;
//		}
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[size] != nums[i])
//			{
//				size++;
//				nums[size] = nums[i];
//			}
//		}
//
//		return size + 1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 1, 1, 2 };
//
//	cout << s.removeDuplicates(v) << endl;
//	system("pause");
//	return 0;
//}
