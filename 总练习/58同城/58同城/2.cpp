//#include <iostream>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	//判断pow(a + k)^0.5和pow(b +k)^0.5是否是整数，若是则返回k
//
//	int question(int a, int b)
//	{
//		int c, d;
//		for (int i = 0; i < 500; i++)
//		{
//			c = (int)pow((a + i), 0.5);
//			d = (int)pow((b + i), 0.5);
//			if (pow(c, 2) == (a + i) && pow(d, 2) == (b + i))
//			{
//				return i;
//			}
//		}
//	}
//};
//
//bool isInt(string& s)
//{
//	auto pos = s.find(".");
//	if (pos != string::npos)
//	{
//		return false;
//	}
//	return true;
//}
//
//int main()
//{
//	Solution c;
//	int a, b;
//	//cin >> a >> b;
//	//cout << c.question(a, b) << endl;
//	cout << 
//	cout << pow(9, 0.5) << endl;
//	cout << pow(8, 0.5) << endl;
//	cout << sqrt(8) << endl;
//	return 0;
//}