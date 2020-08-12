#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//	int numWays(int n) {
//		if (n == 0 || n == 1)
//		{
//			return 1;
//		}
//
//		int l1 = 1;
//		int l2 = 1;
//		int l = 1;
//		while (n > 1)
//		{
//			l = (l1 + l2) % 1000000007;
//			l1 = l2;
//			l2 = l;
//			n--;
//		}
//
//		return l;
//	}
//};

class Solution {
public:
	int numWays(int n) {
		if (n == 0 || n == 1)
		{
			return 1;
		}

		vector<int> dp;
		dp.resize(n + 1);
		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 2; i <= n; i++)
		{
			dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
		}

		return dp[n];
	}
};

int main()
{
	Solution a;
	cout << a.numWays(5) << endl;
	return 0;
}