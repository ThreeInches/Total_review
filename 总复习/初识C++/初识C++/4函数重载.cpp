#include <iostream>
using namespace std;

int add(int left, int right)
{
	return left + right;
}

double add(double left, double right)
{
	return left + right;
}

long add(long left, long right)
{
	return left + right;
}

int main4()
{
	add(10, 20);
	add(10.0, 20.0);
	add(10l, 20l);
	system("pause");
	return 0;
}
