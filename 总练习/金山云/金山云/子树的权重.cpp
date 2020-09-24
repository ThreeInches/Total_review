//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int Value(vector<int>& tree, int n)
//{
//	if (2 * n + 2 > tree.size() || 2 * n + 1 > tree.size())
//	{
//		return 0;
//	}
//	return tree[2 * n + 1] + tree[2 * n + 2] + Value(tree, 2 * n + 1) + Value(tree, 2 * n + 2);
//}
//
//bool Deal(vector<int>& tree)
//{
//	for(int i = (tree.size() - 1) / 2; i >= 0; i--)
//	{
//		if (Value(tree, 2 * i + 1) == Value(tree, 2 * i + 2))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	int n = 7;
//	vector<vector<int>> tree(T, vector<int>(n));
//	for (int i = 0; i < tree.size(); i++)
//	{
//		for (int j = 0; j < tree[i].size(); j++)
//		{
//			cin >> tree[i][j];
//		}
//	}
//
//	for (int i = 0; i < tree.size(); i++)
//	{
//		if (Deal(tree[i]))
//		{
//			cout << "Yes" << endl;
//			cout << Value(tree[i], 0) << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}