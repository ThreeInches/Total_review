#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

//注：
//deque中排序的效率很低，当对deque排序的时候，需要多次对deque中的元素进行整体遍历，而deque的遍历很低，deque的空间不连续。

int main()
{
	int arr[] = { 3, 2, 4, 5, 1, 8, 9, 7, 6 };
	deque<int> d(arr, arr + sizeof(arr) / sizeof(arr[0]));

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	sort(d.begin(), d.end());

	for (auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
