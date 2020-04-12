#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main()
{
	vector<int> v{ 3, 2, 4, 5, 6, 1, 7, 8, 9 };
	priority_queue<int> pq;

	for (auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto& e : v)
	{
		pq.push(e);
	}

	cout << pq.top() << endl;

	system("pause");
	return 0;
}
