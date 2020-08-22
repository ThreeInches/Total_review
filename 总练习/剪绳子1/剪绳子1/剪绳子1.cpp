//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////class Solution
////{
////public:
////	int cuttingRope(int n)
////	{
////		if (n == 2 || n == 3)
////		{
////			return n - 1;
////		}
////		int res = 1;
////		if (n % 3 == 0)
////		{
////			return pow(3, n / 3);
////		}
////		else if(n % 3 == 1)
////		{
////			return 4 * pow(3, (n - 4) / 3);
////		}
////		else
////		{
////			return 2 * pow(3, n / 3);
////		}
////	}
////};
//
//class Solution
//{
//public:
//	int cuttingRope(int n)
//	{
//		if (n == 2 || n == 3)
//		{
//			return n - 1;
//		}
//		long long res = 1;
//		while (n > 4)
//		{
//			n -= 3;
//			res *= 3;
//			res %= 1000000007;
//		}
//
//		return (n * res) % 1000000007;
//	}
//}; 
//
//int main()
//{
//	Solution a;
//	cout << a.cuttingRope(120) << endl;
//	cout << a.cuttingRope(998) << endl;
//	return 0;
//}