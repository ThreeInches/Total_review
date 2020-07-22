#include <iostream>

using namespace std;

class Solution
{
public:
	int  NumberOf1(int n)
	{
		int count = 0;
		while (n)
		{
			n &= (n - 1);
			count++;
		}
		return count;
	}
};

//class Solution
//{
//public:
//	int  NumberOf1(int n)
//	{
//		int count = 0;
//		while (n)
//		{
//			if (n & 1)
//			{
//				count++;
//			}
//			n >>= 1;
//		}
//		return count;
//	}
//};

int main()
{
	Solution a;
	cout << a.NumberOf1(7) << endl;
	system("pause");
	return 0;
}
