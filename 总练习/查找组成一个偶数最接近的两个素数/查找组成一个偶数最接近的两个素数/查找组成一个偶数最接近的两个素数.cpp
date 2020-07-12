#include <iostream>
#include <functional>

using namespace std;

bool isPrime(int m)
{
	for (int i = 2; i <= sqrt(m); i++)
	{
		if (m % i == 0)
		{
			return false;
		}

		return true;
	}
}

int main()
{
	int m;
	int half;
	int i;

	while (cin >> m)
	{
		half = m / 2;
		for (i = half; i > 0; i--)
		{
			if (isPrime(i) && isPrime(m - i))
			{
				break;
			}
		}

		cout << i << endl << m - i << endl;
	}
	system("pause");
	return 0;
}
