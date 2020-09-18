//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int Deal(vector<int>& w, vector<int>& v, int p)
//{
//	int n = w.size();
//	if (n == 0)
//	{
//		return 0;
//	}
//
//	vector<vector<int>> dp(n, vector<int>(p + 1, -1));
//	for (int i = 0; i <= p; i++)
//	{
//		dp[0][i] = (i >= w[0] ? v[0] : 0);
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j <= p; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (w[i] <= j)
//			{
//				dp[i][j] = max(dp[i][j], v[i] + dp[i - 1][j - w[i]]);
//			}
//		}
//	}
//
//	return dp[n - 1][p];
//}
//
//int main()
//{
//	int n, p;
//	cin >> n >> p;
//	vector<vector<int>> val(n, vector<int>(3));
//	for (int i = 0; i < val.size(); i++)
//	{
//		for (int j = 0; j < val[i].size(); j++)
//		{
//			cin >> val[i][j];
//		}
//	}
//
//	vector<int> w;
//	vector<int> v;
//
//	int sum = 0;
//	for (int i = 0; i < val.size(); i++)
//	{
//		sum += val[i][0];
//	}
//
//
//	for (int i = 0; i < val.size(); i++)
//	{
//		while (val[i][0]--)
//		{
//			w.push_back(val[i][1]);
//			v.push_back(val[i][2]);
//		}
//	}
//
//	int res;
//	res = Deal(w, v, p);
//	cout << res;
//	return 0;
//}