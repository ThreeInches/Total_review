#include <iostream>
#include <list>
using namespace std;

//注：
//1、begin和end为正向迭代器，对迭代器执行++操作，迭代器向后移动
//2、rbegin和rend为反向迭代器，对迭代器执行++操作，迭代器向前移动

void PrintList(const list<int>& l)
{
	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); cit++)
	{
		cout << *cit << " ";
	}
	cout << endl;
	
	for (list<int>::const_reverse_iterator crit = l.rbegin(); crit != l.rend(); crit++)
	{
		cout << *crit << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	for (list<int>::reverse_iterator rit = l.rbegin(); rit != l.rend(); rit++)
	{
		cout << *rit << " ";
	}
	cout << endl;

	PrintList(l);
	system("pause");
	return 0;
}
