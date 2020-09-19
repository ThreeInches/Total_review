//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool isHuiwen(int num)
//{
//	vector<int> tmp;
//	for (; num; num /= 10)
//	{
//		tmp.push_back(num % 10);
//	}
//	int left = 0;
//	int right = tmp.size() - 1;
//	while (left < right)
//	{
//		if (tmp[left] != tmp[right])
//		{
//			return false;
//		}
//		left++;
//		right--;
//	}
//	return true;
//}
//
//int FindN(int m)
//{
//	for (int i = m + 1; i < 99999; i++)
//	{
//		if (isHuiwen(i))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int m, n;//14点的行驶里程数,16点的行驶里程数
//	cin >> m;
//	int res;
//	n = FindN(m);
//	float c, d;
//	int tmp;
//	c = (n - m) / 2;
//	tmp = (n - m) / 2;
//	if ((c - tmp) >= 0.5)
//	{
//		res = tmp + 1;
//	}
//	res = tmp;
//	cout << res;
//	return 0;
//}