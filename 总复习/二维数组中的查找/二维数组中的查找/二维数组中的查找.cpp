#include <iostream>
#include <vector>

using namespace std;


int main()
{	
	vector<vector<int>> v;
	v.resize(100);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			v[i].push_back(i);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (auto& e : v[i])
		{
			cout << e << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << v.size() << endl;
	cout << v[0].size() << endl;

	vector<vector<int>> vc;

	vc.resize(10);
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			vc[i].push_back(8);
		}	
	}

	for (int i = 0; i < 10; i++)
	{
		for (auto& e : vc[i])
		{
			cout << e << " ";
		}
		cout << endl;
	}

	cout << vc.size() << endl;
	cout << vc[0].size() << endl;
	cout << vc[1].size() << endl;
	cout << vc[2].size() << endl;
	cout << vc[3].size() << endl;
	cout << vc[4].size() << endl;
	cout << vc[5].size() << endl;
	cout << vc[6].size() << endl;
	cout << vc[7].size() << endl;
	cout << vc[8].size() << endl;

	system("pause");
	return 0;
}



/*
1, 2, 8, 9,
2, 4, 9, 12,
4, 7, 10, 13,
6, 8, 11, 15
	
*/
