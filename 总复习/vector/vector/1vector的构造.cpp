#include <iostream>
#include <vector>

using namespace std;

void TestVector()
{
	vector<int> first;
	vector<int> second(4, 100);
	vector<int> third(second.begin(), second.end());
	vector<int> fourth(third);

	int array[] = { 9, 5, 2, 7 };
	vector<int> fifth(array, array + sizeof(array) / sizeof(array[0]));
	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	TestVector();
	system("pause");
	return 0;
}
