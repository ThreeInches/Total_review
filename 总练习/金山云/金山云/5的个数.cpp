//#include <iostream>
//
//using namespace std;
//
//int fiveCount(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 10 == 5)
//		{
//			count++;
//		}
//		n /= 10;
//	}
//	return count;
//}
//
//int Deal(int n)
//{
//	int tmp = 0;
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		tmp = fiveCount(i);
//		count += tmp;
//		tmp = 0;
//	}
//	return count;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int res;
//	res = Deal(n);
//	cout << res << endl;
//	return 0;
//}