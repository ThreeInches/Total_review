#include <iostream>
#include <vector>

using namespace std;

int deal(vector<vector<int>>& a)
{
	int m = a.size();
	int n = a[0].size();
	int count = 0;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			int o = 1;
			while (o < m)
			{
				if (a[i][0] + a[i + o][0] != a[i][j] + a[i + o][j])
				{
					break;
				}
				o++;
			}
			count++;
		}
	}
	return count;
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> a(n, vector<int>(k));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> a[i][j];
		}
	}

	//cout << deal(a) << endl;
	return 0;
}
