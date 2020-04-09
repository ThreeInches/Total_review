#include <iostream>
#include "list.h"

using namespace std;

void TestList1()
{
	gwp::list<int> l1;
	gwp::list<int> l2(10, 5);
	l2.PrintList();
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	gwp::list<int> l3(array, array + sizeof(array) / sizeof(array[0]));
	l3.PrintList();
	gwp::list<int> l4(l3);
	l4.PrintList();
	l1 = l4;
	l1.PrintList();
}

void TestList2()
{
	// 测试PushBack与PopBack
	gwp::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.PrintList();
	l.pop_back();
	l.pop_back();
	l.PrintList();
	l.pop_back();
	cout << l.size() << endl;
	// 测试PushFront与PopFront
	l.push_front(1);
	l.push_front(2);
	l.push_front(3);
	l.PrintList();
	l.pop_front();
	l.pop_front();
	l.PrintList();
	l.pop_front();
	cout << l.size() << endl;
}

void TestList3()
{
	int array[] = { 1, 2, 3, 4, 5 };
	gwp::list<int> l(array, array + sizeof(array) / sizeof(array[0]));
	auto pos = l.begin();
	l.insert(l.begin(), 0);
	l.PrintList();
	++pos;
	l.insert(pos, 2);
	l.PrintList();
	l.erase(l.begin());
	l.erase(pos);
	l.PrintList();
	// pos指向的节点已经被删除，pos迭代器失效
	cout << *pos << endl;
	auto it = l.begin();
	while (it != l.end())
	{
		it = l.erase(it);
	}
	cout << l.size() << endl;
}

int main()
{
	gwp::list<int> l(4, 5);
	int arr[5] = { 1, 3, 5, 7, 9 };
	gwp::list<int> l2(arr, arr + 5);
	gwp::list<int> l3 = l2;

	for (auto i = l3.begin(); i != l3.end(); i++)
	{
		cout << *i << ' ';
	}

	TestList1();
	TestList2();
	TestList3();

	system("pause");
	return 0;
}
