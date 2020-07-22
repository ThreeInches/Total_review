#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int rectCover(int number) {
		if (number == 0)
		{
			return 0;
		}
		vector<int> res(number + 1);
		res[0] = 1;
		res[1] = 1;
		for (int i = 2; i <= number; i++)
		{
			res[i] = res[i - 1] + res[i - 2];
		}

		return res[number];
	}
};

int main()
{

	system("pause");
	return 0;
}
