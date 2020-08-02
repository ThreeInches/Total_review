#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s1, s2;
	int count = 0;
	vector<string> tmp;

		//getline(cin, s1);
		//getline(cin, s2);
	s1 = "abcdefghijklmnopqrst";
	s2 = "aba";
		int m = s1.size();
		int n = s2.size();
		for (int i = 0; i < m - n; i++)
		{
			string s;
			s = s1.substr(i, n);
			tmp.push_back(s);
		}

		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == s2)
			{
				count++;
			}
		}

		cout << count << endl;
		system("pause");
	return 0;
}