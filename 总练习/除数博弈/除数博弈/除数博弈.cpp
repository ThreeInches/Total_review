#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
	bool divisorGame(int N)
	{
		if (N % 2 == 0)
		{
			return true;
		}

		return false;
	}
};

int main()
{

	system("pause");
	return 0;
}
