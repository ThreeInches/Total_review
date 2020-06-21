#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int f0 = 0;
	int f1 = 1;
	int f = 0;
	int i = 0;

	int left = 0, right = 0;
	while (1)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;

		if (f < n)
		{
			left = n - f;
		}
		else
		{
			right = f - n;
			break;
		}
	}

	cout << min(left, right) << endl;
	system("pause");
	return 0;
}
