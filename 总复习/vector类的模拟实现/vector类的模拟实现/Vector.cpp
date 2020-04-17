#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{

	int a[] = { 2, 3, 4, 5 };
	gwp::vector<int> v2(a, a + 4);
	gwp::vector<int> v1(v2.begin(), v2.end());

	gwp::vector<int> v(1, 0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.pop_back();

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	for (auto & e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.insert(v.begin() + 2, a + 1, a + 3);

	v.erase(v1.begin() + 2, v1.end() - 1);

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}

	cout << v1.size() << endl;
	system("pause");
	return 0;
}