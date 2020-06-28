#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int mySqrt(int x)
	{
		return (int)sqrt(x);
	}
};

int main()
{
	Solution a;
	cout << a.mySqrt(4) << endl;
	cout << a.mySqrt(8) << endl;
	system("pause");
	return 0;
}
