//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> A(N);
//	for (int i = 0; i < A.size(); i++)
//	{
//		cin >> A[i];
//	}
//
//	sort(A.begin(), A.end());
//	int sum = 0;//现有数列的和
//	for (int i = 0; i < A.size(); i++)
//	{
//		sum += A[i];
//	}
//
//	int sum_q = 0;
//	int Q;
//	int min = INT_MAX;
//	for (int q = 2; q <= 9999; q++)
//	{
//		sum_q = (1 - pow(q, N)) / (1 - q);
//		if (abs(sum - sum_q) < min)
//		{
//			min = abs(sum - sum_q);
//			Q = q;
//		}
//	}
//
//	int count = 0;
//	int tmp;
//	for (int i = 0; i < N; i++)
//	{
//		tmp = abs(A[i] - pow(Q, i));
//		count += tmp;
//	}
//	cout << count << endl;
//	return 0;
//}