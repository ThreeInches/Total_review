//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (n <= 1 || n >= 20)
//	{
//		cout << "error" << endl;
//	}
//
//	vector<int> tmp(n + 1);
//	vector<vector<int>> res(n + 1, vector<int>(n + 1));
//	for (int i = 1; i <= n; i++)
//	{
//		tmp.push_back(i);
//	}
//	int i = n;
//	int j = n;
//	int index = 0;
//	while (i && j)
//	{
//		int p = 0;
//		int q = j;
//		for (p = 0; p < i; p++)
//		{
//			res[p][q] = tmp[index];
//			index++;
//		}
//		j--;
//		for (q = j; q >= 0; q--)
//		{
//			res[p][q] = tmp[index];
//			index++;
//		}
//		i--;
//		for (p = i; p >= 0; p--)
//		{
//			res[p][q] = tmp[index];
//			index++;
//		}
//		j--;
//		for (q = 0; q <= j; q++)
//		{
//			res[p][q] = tmp[index];
//			index++;
//		}
//		i--;
//	}
//	for (int m = 0; m < n; m++)
//	{
//		for (int o = 0; o < n; o++)
//		{
//			cout << res[m][o] << " ";
//		}
//	}
//	return 0;
//}