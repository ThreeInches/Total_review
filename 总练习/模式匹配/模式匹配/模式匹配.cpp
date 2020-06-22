#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool patternMatching(string pattern, string value) {
		int m = pattern.size();
		int n = value.size();
		if ((m == 1) || (m == 0 && n == 0))
		{
			return true;
		}
		if (m == 0 || (n == 0 && m != 1))
		{
			return false;
		}

		int A = 0, B = 0;
		int pA = 1000, pB = 1000;

		for (int i = 0; i < m; i++)
		{
			if (pattern[i] == 'a')
			{
				if (pA == 1000)
				{
					pA = i;
				}
				A++;
			}
			else
			{
				if (pB == 1000)
				{
					pB = i;
				}
				B++;
			}
		}
		if (A == 0)
		{
			if (n%B != 0)
			{
				return false;
			}
			string b;
			b = value.substr(0, n / B);
			string s;
			for (auto e : pattern)
			{
				s += b;
			}
			if (s == value)
			{
				return true;
			}
		}
		else if (B == 0)
		{
			if (n%A != 0)
			{
				return false;
			}
			string a;
			a = value.substr(0, n / A);
			string s;
			for (auto e : pattern)
			{
				s += a;
			}
			if (s == value)
			{
				return true;
			}
		}
		else
		{
			for (int i = 0; i*A <= n; i++)
			{
				if ((n - A*i) % B == 0)
				{
					string a, b;
					if (pA < pB)
					{
						a = value.substr(0, i);
						b = value.substr(pB*i, (n - A*i) / B);
					}
					else
					{
						b = value.substr(0, (n - A*i) / B);
						a = value.substr(pA*(n - A*i) / B, i);
					}
					if (a != b)
					{
						string s;
						for (auto e : pattern)
						{
							if (e == 'a')
							{
								s += a;
							}
							else
							{
								s += b;
							}
						}
						if (s == value)
						{
							return true;
						}
					}
				}
			}
		}

		return false;
	}
};

int main()
{
	Solution a;
	cout << a.patternMatching("abba", "dogcatcatdog") << endl;
	cout << a.patternMatching("abba", "dogcatcatfish") << endl;
	cout << a.patternMatching("aaaa", "dogcatcatdog") << endl;
	cout << a.patternMatching("abba", "dogdogdogdog") << endl;
	system("pause");
	return 0;
}
