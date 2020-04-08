#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1;//构造空的l1
	list<int> l2(4, 100);//构造4个值为100的list
	list<int> l3(l2.begin(), l2.end());//用l2的begin-end区间构造l3
	list<int> l4(l3);//拷贝构造l4

	//用数组构造list
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l5(arr, arr + sizeof(arr) / sizeof(arr[0]));

	//用迭代器的方式打印l5
	for (list<int>::iterator it = l5.begin(); it!=l5.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//用范围for遍历
	for (auto& e : l5)
	{
		cout << e << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}
