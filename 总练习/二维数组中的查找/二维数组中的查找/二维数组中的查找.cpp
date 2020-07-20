#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int i = 0;
		int j = array[0].size() - 1;

		while (i < array[0].size() && j >= 0)
		{
			if (target < array[i][j])
			{
				j--;
			}
			else if (target > array[i][j])
			{
				i++;
			}
			else
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{
	Solution a;
	vector<vector<int>> v{ { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 }, { 4, 5, 6, 7 } };
	cout << a.Find(4, v) << endl;
	system("pause");
	return 0;
}
