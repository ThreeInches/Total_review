//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution
//{
//public:
//	int minSumOfLengths(vector<int>& A, int T)
//	{
//		vector<vector<int>> a;
//		vector<int> tmp;
//		int sum = 0;
//		int i = 0;
//		int index = 0;
//		while (i < A.size())
//		{
//			if (sum < T)
//			{
//				sum += A[i];
//				i++;
//				tmp.push_back(A[i]);
//			}
//			else if (sum == T)
//			{
//				a.push_back(tmp);
//			}
//			else
//			{
//				tmp.erase(tmp.begin());
//				sum = 0;
//			}
//		}
//	}
//};
//
//int main()
//{
//
//	return 0;
//}