#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MIN -100000

int main1()
{
	int size;
	cin >> size;
	vector<int> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}

	int sum = MIN;

	for (int i = 0; i < v.size(); i++)
	{
		int sub = 0;
		for (int j = i; j < v.size(); j++)
		{
			sub += v[j];

			if (sub > sum)
			{
				sum = sub;
			}
		}
	}

	cout << sum << endl;
	system("pause");
	return 0;
}

int main()
{
	int size;
	cin >> size;
	vector<int> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}

	int sum = v[0];
	int res = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		sum = max(sum + v[i], v[i]);

		if (sum >= res)
		{
			res = sum;
		}
	}

	cout << res << endl;
	system("pause");
	return 0;
}