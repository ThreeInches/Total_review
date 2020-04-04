#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void TestPushAndPop()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	v.pop_back();
	v.pop_back();

	it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void TestFindInsertErase()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	vector<int>::iterator pos = find(v.begin(), v.end(), 3);

	v.insert(pos, 30);

	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	pos = find(v.begin(), v.end(), 3);

	v.erase(pos);

	it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}

void TestIndexVisit()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	v[0] = 10;
	cout << v[0] << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	vector<int> tmp;
	tmp.swap(v);

	for (int i = 0; i < tmp.size(); i++)
	{
		cout << tmp[i] << ' ';
	}
	cout << endl;

	for (auto & e : v)
	{
		cout << e << ' ';
	}
	cout << endl;
}

int main()
{
	TestPushAndPop();
	TestFindInsertErase();
	TestIndexVisit();

	system("pause");
	return 0;
}
