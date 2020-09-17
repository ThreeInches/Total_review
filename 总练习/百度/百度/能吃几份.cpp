//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int deal(vector<int>& mat, int m)
//{
//	int n = mat.size();
//	int i = 0;
//	int sum = 0;
//	for (int p = 0; p < n; p++)
//	{
//		sum += mat[p];
//		if (sum < m)
//		{
//			return -1;
//		}
//	}
//
//	sum = 0;
//
//
//}
//
//int main()
//{
//	int T, n, m;
//	vector<int> mat;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n >> m;
//		mat.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> mat[i];
//		}
//
//		int count;
//		count = deal(mat, m);
//		cout << count << endl;
//		mat.clear();
//	}
//	return 0;
//}