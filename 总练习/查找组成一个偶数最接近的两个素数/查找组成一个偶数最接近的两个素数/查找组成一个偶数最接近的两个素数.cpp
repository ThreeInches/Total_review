#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int m;
	while (cin >> m)
	{
		int half = m / 2;
		for (int i = half; i >= 2; i--)
		{
			if (isPrime(i) && isPrime(m - i))
			{
				cout << i << endl << m - i << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}