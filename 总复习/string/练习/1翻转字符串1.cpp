//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	string reverseString(string s)
//	{
//		if (s.empty())
//		{
//			return s;
//		}
//		size_t begin = 0;
//		size_t end = s.size() - 1;
//
//		while (begin < end)
//		{
//			swap(s[begin], s[end]);
//			begin++;
//			end--;
//		}
//		return s;
//	}
//};
//
//int main()
//{
//	Solution a;
//	string s("i am a student");
//	s = a.reverseString(s);
//	cout << s << endl;
//	system("pause");
//	return 0;
//}
