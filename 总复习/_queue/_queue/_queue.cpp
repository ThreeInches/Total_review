#include <iostream>
#include <queue>

using namespace std;

void TestQueue1()
{
	queue<int> q1;//构造q1
	queue<int> q2;//拷贝构造q2
}

void TestQueue2()
{
	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout << q.empty() << endl;
	cout << q.size() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;

	q.pop();

	cout << q.empty() << endl;
	cout << q.size() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;
}

int main()
{
	TestQueue1();
	TestQueue2();

	system("pause");
	return 0;
}
