#include <iostream>
using namespace std;

void testfun(int a = 10)
{
	cout << a << endl;
}

void testfun2(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void testfun3(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main3()
{
	testfun();
	testfun(20);
	testfun2();
	testfun2(40);
	testfun2(40, 50);
	testfun2(40, 50, 60);
	//testfun3();´íÎó
	testfun3(40);
	testfun3(40, 50);
	testfun3(40, 50, 60);
	system("pause");
	return 0;
}