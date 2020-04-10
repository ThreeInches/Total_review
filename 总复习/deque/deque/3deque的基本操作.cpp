#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> d(arr, arr + sizeof(arr) / sizeof(arr[0]));

	d.push_back(10);
	d.push_front(0);

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	cout << d.size() << endl;
	cout << d.front() << endl;
	cout << d.back() << endl;

	d.insert(d.begin(), 0);

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	d.erase(d.begin());
	d.pop_back();
	d.pop_front();

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	d.clear();
	
	cout << d.size() << endl;

	system("pause");
	return 0;
}
