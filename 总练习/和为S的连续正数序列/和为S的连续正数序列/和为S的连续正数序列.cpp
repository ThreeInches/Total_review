#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<vector<int> > FindContinuousSequence(int sum)
	{
		vector<vector<int>> res;
		int low = 1;
		int hight = 2;

		while (low < hight)
		{
			int total = ((low + hight)*(hight - low + 1)) / 2;
			if (sum == total)
			{
				vector<int> tmp;
				for (int i = low; i <= hight; i++)
				{
					tmp.push_back(i);
				}
				res.push_back(tmp);
				low++;
			}
			else if (sum >total)
			{
				hight++;
			}
			else
			{
				low++;
			}
		}

		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
