#include <iostream>
#include <functional>
#include <algorithm>
#include <functional>
using namespace std;

bool isPerfectNumber(int n)
{
	int sum = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (n / i == i)
			{
				sum += i;
			}
			else
			{
				sum += i + (n / i);
			}
		}
	}
	if (sum + 1 == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	int count = 0;
	while (cin >> n)
	{
		if ((n < 0) || (n > 500000))
		{
			cout << -1 << endl;
		}

		for (int i = 2; i <= n; i++)
		{
			if (isPerfectNumber(i))
			{
				count++;
			}
		}

		cout << count << endl;
		cout << sqrt(4) << endl;
	}

	

	system("pause");
	return 0;
}
