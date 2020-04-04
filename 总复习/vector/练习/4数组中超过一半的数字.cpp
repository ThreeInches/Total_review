//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		int count = 0;
//		int mid = (numbers.size() - 1) / 2;
//
//		sort(numbers.begin(), numbers.end());
//
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (numbers[i] == numbers[mid])
//			{
//				count++;
//			}
//		}
//
//		return count > mid ? numbers[mid] : 0;
//	}
//};
//
//int main()
//{
//	Solution a;
//	vector<int> nums1{ 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//
//	cout << a.MoreThanHalfNum_Solution(nums1) << endl;
//	system("pause");
//	return 0;
//}
