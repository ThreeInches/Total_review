#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> d(arr, arr + sizeof(arr) / sizeof(arr[0]));

	deque<int>::iterator it = d.begin();
	while (it != d.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	deque<int>::reverse_iterator rit = d.rbegin();
	while (rit != d.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;

	system("pause");
	return 0;
}
