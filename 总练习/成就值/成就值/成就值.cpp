//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//
//int main()
//{
//	int N, X;
//	vector<int> A;
//	vector<int> B;
//	cin >> N >> X;
//	A.resize(N);
//	B.resize(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i] >> B[i];
//	}
//	
//	int max_a = 0;
//	int i = 0;
//	while (i < N)
//	{
//		if (B[i] <= X)
//		{
//			max_a += A[i];
//			X -= B[i];
//		}
//		else
//		{
//			i++;
//		}
//	}
//
//	cout << max_a << endl;
//	return 0;
//}