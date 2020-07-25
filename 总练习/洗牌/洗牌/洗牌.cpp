#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T, n, k;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		vector<int> a(2 * n);
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> a[i];
		}

		while (k--)
		{
			vector<int> tmp(a.begin(), a.end());
			for (int i = 0; i < n; i++)
			{
				a[2 * i] = tmp[i];
				a[2 * i + 1] = tmp[i + n];
			}
		}
		for (int i = 0; i < 2 * n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
