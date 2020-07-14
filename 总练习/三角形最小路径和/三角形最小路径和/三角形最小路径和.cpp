#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int minimumTotal(vector<vector<int>>& triangle)
	{
		int size = triangle.size();
		vector<int> dp(size + 1, 0);

		for (int i = size - 1; i >= 0; i--)
		{
			for (int j = 0; j < triangle[i].size(); j++)
			{
				dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
			}
		}

		return dp[0];
	}
};

int main()
{
	Solution a;
	vector<vector<int>> v{ { 2 }, { 3, 4 }, { 6, 5, 7 }, { 4, 1, 8, 3 } };
	cout << a.minimumTotal(v) << endl;
	system("pause");
	return 0;
}
