#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> tmp;
	vector<vector<int>> res(m, vector<int>(3));

	tmp.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tmp[i];
	}

	for (int i = 0; i < res.size(); i++)
	{
		for (int j = 0; j < res[i].size(); j++)
		{
			cin >> res[i][j];
		}
	}


	return 0;
}