//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//
//using namespace std;
//
//class Solution
//{
//public:
//	//将num按位存在vector<int> tmp中
//	//将num进行随机组合(采用回溯算法)成vector<vector<int>> res;
//	//判断新的组合中没有0~25的数字 则删除  计算二维数组的行数  就是不同的翻译方法
//	int translateNum(int num)
//	{
//		vector<int> tmp;
//		vector<vector<int>> res;
//		while (num)
//		{
//			tmp.push_back(num % 10);
//			num /= 10;
//		}
//		int left = 0;
//		int right = tmp.size() - 1;
//		while (left < right)
//		{
//			swap(tmp[left], tmp[right]);
//			left++;
//			right--;
//		}
//
//			
//
//		return 0;
//	}
//};
//
//int main()
//{
//	Solution a;
//	a.translateNum(12158);
//
//	return 0;
//}