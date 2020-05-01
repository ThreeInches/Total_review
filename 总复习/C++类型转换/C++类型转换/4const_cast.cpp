#include <iostream>

using namespace std;

//const_cast可以去掉变量的const属性

int main()
{
	const int a = 2;
	int* p = const_cast<int*>(&a);
	*p = 3;
	cout << a << endl;
	system("pause");
	return 0;
}
