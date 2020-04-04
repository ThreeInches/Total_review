#include "String.h"
//#include <string>

void TestString()
{
	String s1("Hell");
	s1.PushBack('o');
	s1 += ',';
	s1 += "World!";

	cout << s1 << endl;
	cout << s1.Size() << endl;
	cout << s1.Capacity() << endl;

	String::iterator it = s1.begin();
	for (; it != s1.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	for (auto& ch : s1)
	{
		cout << ch << ' ';
	}
	cout << endl;
}

int main()
{
	TestString();
	system("pause");
	return 0;
}