#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
	gwp::queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	cout << q.size() << endl;
	cout << q.empty() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;

	q.pop();
	cout << q.back() << endl;

	system("pause");
	return 0;
}
