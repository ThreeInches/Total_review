#include <iostream>
#include <deque>
using namespace std;

int main()
{

	deque<int> d1;//构造空d1
	deque<int> d2(10, 5);//构造10个值为5的d2
	
	for (auto& e : d2)
	{
		cout << e << " ";
	}
	cout << endl;

	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//用数组区间构造d3
	deque<int> d3(arr, arr + sizeof(arr) / sizeof(arr[0]));

	for (auto& e : d3)
	{
		cout << e << " ";
	}
	cout << endl;

	deque<int> d4(d3);//拷贝构造d4

	for (auto& e : d4)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
