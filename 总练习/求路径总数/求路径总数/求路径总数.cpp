#include <iostream>

using namespace std;

class PathNumber
{
public:
	int FindPathNumber(int m, int n)
	{
		if ((m > 1) && (n > 1))
		{
			return FindPathNumber(m - 1, n) + FindPathNumber(m, n - 1);
		}
		else if (((m >= 1) && (n == 1)) || ((m == 1) && (n >= 1)))
		{
			return m + n;
		}
		else
		{
			return 0;
		}
	}
};

int main()
{
	int m, n;
	PathNumber a;
	while (cin >> m, cin >> n)
	{
		cout << a.FindPathNumber(m, n) << endl;
	}
	system("pause");
	return 0;
}
