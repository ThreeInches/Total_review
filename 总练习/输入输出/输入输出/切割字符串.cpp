//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	vector<string> vs;
//	char* str = new char[strlen(s.c_str()) + 1];
//	strcpy(str, s.c_str());
//	char* p = strtok(str, " ");
//	while (p)
//	{
//		vs.push_back((string)p);
//		p = strtok(NULL, " ");
//	}
//	delete[] str;
//	for (auto&e : vs)
//	{
//		cout << e << "\t";
//	}
//	return 0;
//}