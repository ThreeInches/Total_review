#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int findLength(vector<int>& A, vector<int>& B)
	{
		int res = 0;
		int lena = A.size();
		int lenb = B.size();
		vector<vector<int>> dp(lena + 1, vector<int>(lenb + 1));
		
		for (int i = 0; i < lena + 1; i++)
		{
			for (int j = 0; j < lenb + 1; j++)
			{
				dp[i][j] = 0;
			}
		}

		for (int i = 1; i <= lena; i++)
		{
			for (int j = 1; j <= lenb; j++)
			{
				if (A[i - 1] == B[j - 1]){
					dp[i][j] = dp[i - 1][j - 1] + 1;
					res = max(res, dp[i][j]);
				}
			}
		}

		return res;
	}
};

int main()
{
	Solution a;
	vector<int> A{ 1, 2, 3, 2, 1 };
	vector<int> B{ 3, 2, 1, 4, 7 };
	cout << a.findLength(A, B) << endl;
	system("pause");
	return 0;
}
