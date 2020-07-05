#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
	bool isMatch(string s, string p)
	{
		int m = s.size();
		int n = p.size();
		s = " " + s;
		p = " " + p;
		vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
		dp[0][0] = true;

		for (int i = 1; i <= n; i++)
		{
			if (p[i] == '*')
			{
				dp[0][i] = dp[0][i - 1];
			}
		}

		for (int j = 1; j <= n; j++)
		{
			for (int i = 1; i <= m; i++)
			{
				if (p[j] != '*')
				{
					dp[i][j] = dp[i - 1][j - 1] && (s[i] == p[j] || p[j] == '?');
				}
				else
				{
					dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
				}
			}
		}

		return dp[m][n];
	}
};

int main()
{
	Solution a;
	cout << a.isMatch("aa", "a") << endl;
	cout << a.isMatch("aa", "*") << endl;
	cout << a.isMatch("cb", "?a") << endl;
	cout << a.isMatch("abced", "a*d") << endl;
	cout << a.isMatch("acbcb", "a*c?b") << endl;
	system("pause");
	return 0;
}
