#include <iostream>
#include <string>

using namespace std;

//class Solution
//{
//public:
//	string LeftRotateString(string str, int n)
//	{
//		if (n == 0 || str.empty())
//		{
//			return "";
//		}
//
//		n %= str.size();
//		while (n--)
//		{
//			char tmp = str[0];
//			int i = 0;
//			for (; i < str.size() - 1; i++)
//			{
//				str[i] = str[i + 1];
//			}
//			str[i] = tmp;
//		}
//
//		return str;
//	}
//};

class Solution
{
public:
	void Reverse(string& str, int left, int right)
	{
		while (left < right)
		{
			char tmp = str[left];
			str[left] = str[right];
			str[right] = tmp;
			left++;
			right--;
		}
	}

	string LeftRotateString(string str, int n)
	{
		if (n == 0 || str.empty())
		{
			return "";
		}

		n %= str.size();
		Reverse(str, 0, n - 1);
		Reverse(str, n, str.size() - 1);
		Reverse(str, 0, str.size() - 1);


		return str;
	}
};

int main()
{

	system("pause");
	return 0;
}
