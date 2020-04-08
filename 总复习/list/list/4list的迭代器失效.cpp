#include <iostream>
#include <list>

using namespace std;

void TestListIterator1()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	list<int>::iterator it = l.begin();
	for (; it != l.end(); it++)
	{
		//erase()函数执行后，it所指向的节点已被删除，因此it无效，在下一次使用it时，必须先给其赋值
		l.erase(it);
	}
}

void TestListIterator2()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> l(arr, arr + sizeof(arr) / sizeof(arr[0]));

	list<int>::iterator it = l.begin();
	for (; it != l.end();)
	{
		//erase()函数执行后，it所指向的节点已被删除，因此it无效，在下一次使用it时，必须先给其赋值
		l.erase(it++);
	}
}


int main()
{
	//TestListIterator1();
	TestListIterator2();
	system("pause");
	return 0;
}
