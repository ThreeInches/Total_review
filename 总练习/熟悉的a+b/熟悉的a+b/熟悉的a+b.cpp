#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> res;
	for (int i = 1; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if ((100 * i + 10 * j + k) + (100 * i + 10 * k + k) == n)
				{
					res.push_back(100 * i + 10 * j + k);
					res.push_back(100 * i + 10 * k + k);
				}
			}
		}
	}
	int p = res.size() / 2;
	sort(res.begin(), res.end());
	cout << p << endl;
	for (int i = res.size() - 1; i >= 0; i--)
	{
		for (int j = res.size() - 1; j >= i; j--)
		{
			if (res[i] + res[j] == n && ((res[i] % 10) != ((res[i] / 10) % 10)))
			{
				cout << res[i] << ' ' << res[j] << endl;
			}
		}
	}
	return 0;
}