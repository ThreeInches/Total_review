#include <iostream>

using namespace std;

class Solution
{
public:
	int reverse(int x)
	{
		int res = 0;
		do
		{
			if (((res < INT_MIN / 10) || (res > INT_MAX / 10)))
			{
				return 0;
			}
			res = res * 10 + x % 10;
		} while (x /= 10);

		return res;
	}
};

int main()
{
	Solution a;
	cout << a.reverse(123) << endl;
	cout << a.reverse(-123) << endl;
	cout << a.reverse(230) << endl;
	cout << a.reverse(1534236469) << endl;
	system("pause");
	return 0;
}
