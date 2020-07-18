#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;


class Soluation
{
public:
	string ADD(string& num1, string& num2)
	{
		int len1 = num1.size();
		int len2 = num2.size();
		string res;
		res.resize(max(len1, len2));

		if (len1 < len2)
		{
			num1.insert(0, abs(len1 - len2), '0');
		}
		else
		{
			num2.insert(0, abs(len1 - len2), '0');
		}

		int step = 0;
		for (int i = max(len1, len2) - 1; i >= 0; i--)
		{
			res[i] = (num1[i] - '0') + (num2[i] - '0') + step;
			res[i] += '0';
			if (res[i] > '9')
			{
				step = 1;
				res[i] -= 10;
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
	Soluation a;
	string num1 = "9999999999999999999999999999";
	string num2 = "1";
	cout << a.ADD(num1, num2) << endl;
	system("pause");
	return 0;
}
