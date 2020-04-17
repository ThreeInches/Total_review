#include <iostream>
#include "priority_queue.h"

using namespace std;

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	gwp::priority_queue<int> pq;

	for (auto& e : v)
	{
		pq.push(e);
	}

	cout << pq.empty() << endl;
	cout << pq.size() << endl;
	cout << pq.top() << endl;

	pq.pop();
	cout << pq.top() << endl;

	system("pause");
	return 0;
}
