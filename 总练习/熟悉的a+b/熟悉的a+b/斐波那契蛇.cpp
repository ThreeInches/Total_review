//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> Fib(int n)
//{
//	int l1 = 1;
//	int l2 = 1;
//	int l = 1;
//	vector<int> res;
//	res.push_back(l1);
//	res.push_back(l2);
//	while (n >= 3)
//	{
//		l = l1 + l2;
//		l1 = l2;
//		l2 = l;
//		n--;
//		res.push_back(l);
//	}
//
//	return res;
//}
//
//int main()
//{
//	int n;
//	vector<int> tmp;
//	vector<vector<int>> res;
//	cin >> n;
//	tmp = Fib(n * n);
//
//	int index = tmp.size();
//	int i = 0;
//	int j = 0;
//	while (!tmp.empty())
//	{
//		res[i][j] = tmp[index];
//		index--;
//		while (j < n)
//		{
//			j++;
//			res[i][j] = tmp[index];
//			index--;
//		}
//		while (i < n)
//		{
//			i++;
//			res[i][j] = tmp[index];
//			index--;
//		}
//		while (j >= 0)
//		{
//			j--;
//			res[i][j] = tmp[index];
//			index--;
//		}
//		while (i >= 0)
//		{
//			i--;
//			res[i][j] = tmp[index];
//			index--;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << res[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}