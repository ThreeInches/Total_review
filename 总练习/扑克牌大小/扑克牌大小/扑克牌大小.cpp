#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	string poker;
	while (getline(cin, poker))
	{
		if (poker.find("joker JOKER") != -1)
		{
			cout << "joker JOKER" << endl;
		}
		else
		{
			int pos = poker.find('-');
			string left = poker.substr(0, pos);
			string right = poker.substr(pos + 1, poker.length());

			int size1 = count(left.begin(), left.end(), ' ') + 1;
			int size2 = count(right.begin(), right.end(), ' ') + 1;

			string first1 = left.substr(0, left.find(' '));
			string first2 = right.substr(0, right.find(' '));
			string str = "345678910JQKA2jokerJOKER";

			if (size1 == size2)
			{
				if (str.find(first1) > str.find(first2))
				{
					cout << left << endl;
				}
				else
				{
					cout << right << endl;
				}
			}
			else
			{
				if (size1 == 4)
				{
					cout << left << endl;
				}
				else if (size2 == 4)
				{
					cout << right << endl;
				}
				else
				{
					cout << "ERROR" << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}
