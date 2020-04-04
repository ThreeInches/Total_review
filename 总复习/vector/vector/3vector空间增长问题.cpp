#include <iostream>
#include <vector>

using namespace std;

void TestCapacity()
{
	size_t size;
	vector<int> foo;

	size = foo.capacity();
	cout << "making foo grow:" << endl;
	for (int i = 0; i < 100; i++)
	{
		foo.push_back(i);
		if (size != foo.capacity())
		{
			size = foo.capacity();
			cout << "capacity changed: " << size << endl;
		}
	}
}

void TestReserve()
{
	size_t size;
	vector<int> bar;
	
	size = bar.capacity();
	bar.reserve(100);
	
	cout << "making bar grow" << endl;
	for (int i = 0; i < 100; i++)
	{
		bar.push_back(i);
		if (size != bar.capacity())
		{
			size = bar.capacity();
			cout << "capacity changed: " << size << endl;
		}
	}
}

void TestResize()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	v.resize(5);
	v.resize(8, 100);
	v.resize(12);

	cout << "v contains:" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
}

int main()
{
	TestCapacity();
	TestReserve();
	TestResize();

	system("pause");
	return 0;
}
