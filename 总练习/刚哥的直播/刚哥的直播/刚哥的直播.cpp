//#include <iostream>
//
//using namespace std;
//
//int Deal(int m, int n)
//{
//	int res;
//	int sumA = 1;
//	int sumB = 1;
//	if (m < 2 * n)
//	{
//		n = m - n;
//	}
//
//	if (n == 0 || m == 0)
//	{
//		return 0;
//	}
//
//
//	for (int i = n; i >= 1; i--)
//	{
//		sumA *= m;
//		m--;
//	}
//
//	for (int i = n; i >= 1; i--)
//	{
//		sumB *= i;
//	}
//
//	res = sumA / sumB;
//	
//	return res;
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int res; 
//	res = Deal(m, n);
//	cout << res << endl;
//	return 0;
//}