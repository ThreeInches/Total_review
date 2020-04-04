#include <iostream>
#include <vector>

using namespace std;

void TestInsertErase()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	//删除导致迭代器非法访问的失效
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);

	v.erase(pos);
	cout << *pos << endl;

	//插入导致增容，增容后pos指向新的空间，原来的空间已经被释放
	pos = find(v.begin(), v.end(), 3);

	v.insert(pos, 30);
	cout << *pos << endl;
}

void TestVector()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it % 2 == 0)
		{
			it = v.erase(it);
		}
		else
		{
			it++;
		}
	}
	cout << endl;

	//失效
	/*it = v.begin();
	for (; it != v.end(); it++)
	{
		if (*it % 2 == 0)
		{
			v.erase(it);
		}
	}
	cout << endl;*/


}

int main()
{
	//TestInsertErase();
	TestVector();

	system("pause");
	return 0;
}
