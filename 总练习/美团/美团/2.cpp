#include <iostream>
#include <vector>

using namespace std;



int main()
{
	int n;
	cin >> n;
	vector<vector<int>> vc(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> vc[i][j];
		}
	}

	vector<int> res(n, 0);
	int p = 0, q = 0;
	int index = 0;
	while (p < n)
	{
		if (vc[p][q] < vc[p + 1][q])
		{
			res[index] = vc[p][q];
			index++;
			p++;
		}
		else
		{
			q++;
		}
	}
	for (auto & e : res)
	{
		cout << e << ' ';

	}
	return 0;
}