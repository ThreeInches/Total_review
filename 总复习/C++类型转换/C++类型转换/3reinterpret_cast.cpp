#include <iostream>

using namespace std;

//reinterpret_cast操作符通常为操作数的位模式提供较低层次的重新解释，用于将一种类型转换为另一种不同的类型

typedef void (*FUNC)();

int doSomething(int i)
{
	cout << "doSomething()" << endl;
	return 0;
}

int main()
{
	FUNC f = reinterpret_cast<FUNC>(doSomething);
	f();
	system("pause");
	return 0;
}
