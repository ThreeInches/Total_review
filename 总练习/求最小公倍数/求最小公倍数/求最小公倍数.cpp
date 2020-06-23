#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int res = a % b;
	while (res)
	{
		a = b;
		b = res;
		res = a % b;
	}

	return b;
}

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << a*b / gcd(a, b) << endl;
	system("pause");
	return 0;
}
