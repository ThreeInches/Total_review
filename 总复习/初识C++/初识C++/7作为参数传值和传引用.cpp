#include <iostream>
#include <ctime>
using namespace std;

struct A
{
	int a[10000];
};

void TestFun1(A a)
{

}

void TestFun2(A& a)
{

}

void TestRefAndValue()
{
	A a;

	size_t begin1 = clock();
	for (int i = 0; i < 10000; i++)
	{
		TestFun1(a);
	}
	size_t end1 = clock();

	size_t begin2 = clock();
	for (int i = 0; i < 10000; i++)
	{
		TestFun2(a);
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
