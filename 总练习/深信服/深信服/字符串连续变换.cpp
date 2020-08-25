//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//string dealSwap(string& num, int m, int n)
//{
//	string res;
//	for (int i = 0; i < num.size(); i++)
//	{
//		if ((num[i] - '0') == m)
//		{
//			num[i] = n + '0';
//		}
//	}
//
//	for (int i = 0; i < num.size(); i++)
//	{
//		res[i] = num[i];
//	}
//	return res;
//}
//
//int main()
//{
//	string res;
//	string num;
//	pair<int, int> mp;
//	int n;
//	getline(cin, num);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> mp.first >> mp.second;
//	}
//	while (n--)
//	{
//		res = dealSwap(num, mp.first, mp.second);
//	}
//	cout << res;
//	return 0;
//}