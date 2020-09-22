//#include <iostream>
//#include <vector>
//
//using namespace std;
////加法
//vector<vector<int>> Add(vector<vector<int>>& A, vector<vector<int>>& B)
//{
//	int M = A.size();
//	int N = A[0].size();
//	int P = B.size();
//	int Q = B[0].size();
//	vector<vector<int>> res(M, vector<int>(N));
//	if (M != P || N != Q)
//	{
//		return res;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			res[i][j] = A[i][j] + B[i][j];
//		}
//	}
//	return res;
//}
////减法
//vector<vector<int>> Sub(vector<vector<int>>& A, vector<vector<int>>& B)
//{
//	int M = A.size();
//	int N = A[0].size();
//	int P = B.size();
//	int Q = B[0].size();
//	vector<vector<int>> res(M, vector<int>(N));
//	if (M != P || N != Q)
//	{
//		return res;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			res[i][j] = A[i][j] - B[i][j];
//		}
//	}
//	return res;
//}
////乘法
//vector<vector<int>> Mul(vector<vector<int>>& A, vector<vector<int>>& B)
//{
//	int M = A.size();
//	int N = A[0].size();
//	int P = B.size();
//	int Q = B[0].size();
//	int tmp;
//	int sum = 0;
//	vector<vector<int>> res(M, vector<int>(Q));
//	if (N != P)
//	{
//		return res;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < Q; j++)
//		{
//			for (int k = 0; k < N; k++)
//			{
//				tmp = A[i][k] * B[k][j];
//				sum += tmp;
//			}
//			res[i][j] = sum;
//		}
//	}
//
//	return res;
//}
//
//vector<vector<int>> Mul2(vector<vector<int>>& A, vector<vector<int>>& B)
//{
//	for (int i = 0; i < B.size(); i++)
//	{
//		for (int j = 0; j < B[i].size(); j++)
//		{
//			B[i][j] = B[j][i];
//		}
//	}
//
//	int M = A.size();
//	int N = A[0].size();
//	int P = B.size();
//	int Q = B[0].size();
//	int tmp;
//	int sum = 0;
//	vector<vector<int>> res(M, vector<int>(Q));
//	if (N != P)
//	{
//		return res;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < Q; j++)
//		{
//			for (int k = 0; k < N; k++)
//			{
//				tmp = A[i][k] * B[k][j];
//				sum += tmp;
//			}
//			res[i][j] = sum;
//		}
//	}
//
//	return res;
//}
//
//int main()
//{
//	int M, N, P, Q;
//	cin >> M >> N >> P >> Q;
//	int op;
//	cin >> op;
//	vector<vector<int>> A(M, vector<int>(N));
//	vector<vector<int>> B(P, vector<int>(Q));
//	vector<vector<int>> res;
//	for (int i = 0; i < A.size(); i++)
//	{
//		for (int j = 0; j < A[i].size(); j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//
//	for (int i = 0; i < B.size(); i++)
//	{
//		for (int j = 0; j < B[i].size(); j++)
//		{
//			cin >> B[i][j];
//		}
//	}
//
//	if (op == 0)
//	{
//		res = Add(A, B);
//	}
//
//	if (op == 1)
//	{
//		res = Sub(A, B);
//	}
//
//	if (op == 2)
//	{
//		res = Mul(A, B);
//	}
//
//	if (op == 3)
//	{
//		res = Mul2(A, B);
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << res[i][j] << " ";
//		}
//	}
//	return 0;
//}