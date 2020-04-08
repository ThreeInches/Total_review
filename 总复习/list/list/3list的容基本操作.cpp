#include <iostream>
#include <vector>
#include <list>

using namespace std;

void PrintList(list<int>& l)
{
	for (auto& e : l)
	{
		cout << e << " ";
	}
	cout << endl;
}

void TestList1()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	l.push_back(10);
	l.push_back(11);
	l.push_back(12);
	l.push_front(0);
	PrintList(l);

	l.pop_back();
	l.pop_back();
	l.pop_front();
	PrintList(l);
}

void TestList2()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	auto pos = l.begin()++;
	cout << *pos << endl;

	l.insert(pos, 4);
	PrintList(l);

	l.insert(pos, 5, 6);
	PrintList(l);

	vector<int> v{ 7, 8, 9 };
	l.insert(pos, v.begin(), v.end());
	PrintList(l);

	l.erase(pos);
	PrintList(l);

	l.erase(l.begin(), l.end());
	PrintList(l);
}

void TestList3()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	list<int> l1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
	int arr2[] = { 6, 7, 8, 9, 10 };
	list<int> l2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
	
	PrintList(l1);
	PrintList(l2);

	l1.swap(l2);
	PrintList(l1);
	PrintList(l2);

	l2.clear();
	cout << l2.size() << endl;
}

int main()
{
	TestList1();
	TestList2();
	TestList3();

	system("pause");
	return 0;
}
