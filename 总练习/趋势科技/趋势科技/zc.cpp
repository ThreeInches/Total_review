//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void fibo()
//{
//	int n;
//	cin >> n;
//
//	if (n < 1) return;
//
//	int m = n * n;
//
//	vector<int> vc(m + 1, 0);
//	vc[0] = 0;
//	vc[1] = 1;
//	vc[2] = 1;
//
//	for (int i = 3; i < m + 1; ++i)
//	{
//		vc[i] = vc[i - 1] + vc[i - 2];
//	}
//
//	vector<vector<int> > res(n, vector<int>(n, 0));
//
//	int left = 0, right = n - 1;
//	int up = 0, down = n - 1;
//
//	int l = left, r = right;
//	int u = up, d = down;
//
//	int ind = m;
//	for (int i = 0; i <= n; ++i)   //从外层向内层打印   ，退出条件可有可无
//	{
//		if (left == right)    //n为奇数时，最内层1eft == right，此时跳出循环
//		{
//			res[up][left] = vc[m];
//			break;
//		}
//		l = left;
//		for (; l <= right; ++l)    //本圈的上面一行
//		{
//			res[up][l] = vc[m--];
//		}
//		up++;
//		u = up;
//		for (; u <= down; ++u)   //本圈右边一列
//		{
//			res[u][right] = vc[m--];
//		}
//		right--;
//		r = right;
//		for (; r >= left; --r) //本圈下边一行
//		{
//			res[down][r] = vc[m--];
//		}
//		down--;
//		d = down;
//		for (; d >= up; --d)    //本圈左边一列
//		{
//			res[d][left] = vc[m--];
//		}
//		left++;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cout << res[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	fibo();
//	return 0;
//}