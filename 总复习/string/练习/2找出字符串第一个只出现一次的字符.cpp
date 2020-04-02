//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	char firstUniqChar(string s)
//	{
//		int bucket[256] = { 0 };
//
//		for (int i = 0; i < s.size(); i++)
//		{
//			bucket[s[i]]++;
//		}
//
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (bucket[s[i]] == 1)
//			{
//				return s[i];
//			}
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	Solution a;
//	string s = "aabbccddefg";
//	cout << a.firstUniqChar(s) << endl;
//	system("pause");
//	return 0;
//}
