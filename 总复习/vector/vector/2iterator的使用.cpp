#include <iostream>
#include <vector>

using namespace std;

void PrintVector(const vector<int>& v)
{
	vector<int>::const_iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

int main()
{
	vector<int> v;
	v.push_back(9);
	v.push_back(5);
	v.push_back(2);
	v.push_back(7);

	vector<int>::iterator it1 = v.begin();
	for (; it1 != v.end(); it1++)
	{
		cout <<  *it1 << ' ';
	}
	cout << endl;

	vector<int>::iterator it2 = v.begin();
	for (; it2 != v.end(); it2++)
	{
		*it2 *= 2;
		cout << *it2 << ' ';
	}
	cout << endl;

	vector<int>::reverse_iterator rit = v.rbegin();
	for (; rit != v.rend(); rit++)
	{
		cout << *rit << ' ';
	}
	cout << endl;

	PrintVector(v);

	system("pause");
	return 0;
}
