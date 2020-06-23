#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	string addBinary(string a, string b)
	{
		int len_a = a.size(), len_b = b.size();
		int dif = abs(len_a - len_b);
		int longSize = len_a > len_b ? len_a : len_b;

		if (len_a < len_b)
		{
			a.insert(0, dif, '0');
		}
		else
		{
			b.insert(0, dif, '0');
		}

		string res;
		res.resize(longSize);

		int step = 0;
		for (int i = longSize - 1; i >= 0; i--)
		{
			res[i] = (a[i] - '0') + (b[i] - '0') + step;
			res[i] += '0';

			if (res[i] >= '2')
			{
				res[i] -= 2;
				step = 1;
			}
			else
			{
				step = 0;
			}
		}

		if (step == 1)
		{
			res.insert(0, 1, '1');
		}

		return res;
	}
};

int main()
{
	Solution a;
	cout << a.addBinary("11", "1") << endl;
	cout << a.addBinary("1010", "1011") << endl;
	system("pause");
	return 0;
}
