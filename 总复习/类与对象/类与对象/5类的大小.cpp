#include <iostream>

using namespace std;

class A1
{
public:
	void FUN()
	{

	}
private:
	int _a;
};

class A2
{
public:
	void FUN()
	{

	}
};

class A3
{

};

struct A4
{
public:
	void FUN()
	{

	}
private:
	int _a;
};

struct A5
{
public:
	void FUN()
	{

	}
};

struct A6
{

};

int main()
{
	cout << sizeof(A1) << endl;
	cout << sizeof(A2) << endl;
	cout << sizeof(A3) << endl;

	cout << sizeof(A4) << endl;
	cout << sizeof(A5) << endl;
	cout << sizeof(A6) << endl;

	system("pause");
	return 0;
}
