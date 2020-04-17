#include "a.h"

using namespace std;

template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	cout << Add(1, 2) << endl;
	cout << Add(2.2, 3.3) << endl;
	system("pause");
	return 0;
}
