#include "String.h"
//#include <string>

int main()
{
	//String s1("caixukun");

	//String::iterator is;
	//for (is = s1.begin(); is != s1.end(); is++)
	//{
	//cout << *is;
	//}

	//cout << endl;

	//for (auto & i : s1)
	//{
	//	cout << i;
	//}


	String s1("n");
	String s2("byte");
	String s3 = s2;
	String s4("qiaobiluo");
	cout << s4.Size() << endl;
	//cout << s4.Capacity() << endl;
	//s4.Resize(16);
	//cout << s4.Size() << endl;
	//cout << s4.Capacity() << endl;

	//cout << (s4 > s1) << endl;
	//cout << (s4 < "666") << endl;
	//cout << ("666" == s4) << endl;
	system("pause");
	return 0;
}