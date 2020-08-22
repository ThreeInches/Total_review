//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	int findGreaterNum(int N)
//	{
//		int p = 0;
//		if (N / 100 == 0)
//		{
//			if ((N / 10) < (N % 10))
//			{
//				p = (N % 10) * 10 + (N / 10);
//			}
//			else
//			{
//				p = N;
//			}
//			return p;
//		}
//		else
//		{
//			vector<int> num;
//			while (N)
//			{
//				int tmp;
//				tmp = N % 10;
//				N /= 10;
//				num.push_back(tmp);
//			}
//			for (int i = 0; i < num.size() - 2; i++)
//			{
//				if (num[i] > num[i + 1])
//				{
//					swap(num[i], num[i + 1]);
//					break;
//				}
//			}
//			int res = 0;
//			for (int i = num.size() - 1; i >= 0; i--)
//			{
//				res = res * 10 + num[i];
//			}
//
//			return res;
//		}
//	}
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	Solution a;
//	int res = a.findGreaterNum(n);
//	if (res == n)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << res << endl;
//	}
//
//	return 0;
//}