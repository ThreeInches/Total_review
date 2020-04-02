//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void TestString1()
//{
//	string s1("Hello, World!");
//	const string s2("NI,HAO!");
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//
//	cout << s1[0] << endl;
//	cout << s2[0] << endl;
//}
//
//void TestString2()
//{
//	string s("Hello,World!");
//
//	//for + operator[]±éÀú
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s[i] << " ";
//	}
//	cout << endl;
//	//µü´úÆ÷±éÀú
//	string::iterator it = s.begin();
//	for (; it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//·¶Î§for±éÀú
//	for (auto& e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	TestString1();
//	TestString2();
//	system("pause");
//	return 0;
//}
