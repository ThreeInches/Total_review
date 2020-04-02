//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	bool isLetterOrNumber(char c)
//	{
//		return (c >= '0'&&c <= '9') || (c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z');
//	}
//
//	bool isPalindrome(string s)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] >= 'a'&&s[i] <= 'z')
//			{
//				s[i] -= 32;
//			}
//		}
//
//		size_t begin = 0;
//		size_t end = s.size() - 1;
//
//		while (begin < end)
//		{
//			while (begin < end&&!isLetterOrNumber(s[begin]))
//			{
//				begin++;
//			}
//		
//			while (begin < end&&!isLetterOrNumber(s[end]))
//			{
//				end--;
//			}
//
//			if (s[begin] != s[end])
//			{
//				return false;
//			}
//			else
//			{
//				begin++;
//				end--;
//			}
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	Solution a;
//	string s1 = "i am a student";
//	string s2 = "ads  sds  sdssda";
//
//	cout << a.isPalindrome(s1) << endl;
//	cout << a.isPalindrome(s2) << endl;
//	system("pause");
//	return 0;
//}
