#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void divisor(int n, vector<int>& v)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			v.push_back(i);
			if (n / i != i)
			{
				v.push_back(n / i);
			}
		}
	}
}

int main()
{
	int n, m;
	vector<int> v;
	while (cin >> n >> m)
	{
		vector<int> res(m + 1, 0);
		res[n] = 1;

		for (int i = n; i <= m; i++)
		{
			if (res[i] == 0)
			{
				continue;
			}
			
			divisor(i, v);

			for (int j = 0; j < v.size(); j++)
			{
				if ((v[j] + i) <= m && res[v[j] + i] != 0)
				{
					res[v[j] + i] = min(res[v[j] + i], res[i] + 1);
				}
				else if ((v[j] + i) <= m)
				{
					res[v[j] + i] = res[i] + 1;
				}
			}

		}

		if (res[m] == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << res[m] - 1<< endl;
		}
	}
	system("pause");
	return 0;
}
