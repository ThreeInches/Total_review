#include <iostream>
#include <ctime>
using namespace std;

struct A
{
	int a[10000];
};

A a;

A TestFun1()
{
	return a;
}

A& TestFun2()
{
	return a;
}

void TestRefAndValue()
{
	size_t begin1 = clock();
	for (int i = 0; i < 10000; i++)
	{
		TestFun1();
	}
	size_t end1 = clock();

	size_t begin2 = clock();
	for (int i = 0; i < 10000; i++)
	{
		TestFun2();
	}
	size_t end2 = clock();

	cout << "TestFun1() Time = " << end1 - begin1 << endl;
	cout << "TestFun2() Time = " << end2 - begin2 << endl;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		TestRefAndValue();
	}
	system("pause");
	return 0;
}
