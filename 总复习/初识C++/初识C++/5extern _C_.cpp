#include <iostream>
using namespace std;

extern "C"
{
	int Add(int left, int right)
	{
		return left + right;
	}
}

int main()
{
	cout << Add(10, 20) << endl;
	system("pause");
	return 0;
}