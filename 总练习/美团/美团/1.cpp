//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isMT(string& s)
//{
//	auto pos1 = s.find('M');
//	auto pos2 = s.find('T');
//	if (pos1 <= s.size() - 1 && pos1 >= 0 && pos2 <= s.size() - 1 && pos2 >= 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isFirst(string& s)
//{
//	if (s.find_last_of('T') == (s.size() - 1) && isMT(s))
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isEnd(string& s)
//{
//	if (s.find_first_of('M') == 0 && isMT(s))
//	{
//		return true;
//	}
//	return false;
//}
//
//string dealString(string& s)
//{
//	auto pos = s.find_first_of('T');
//	auto pos2 = s.find_last_of('M');
//
//	while (1)
//	{
//		string first = s.substr(0, pos);
//		string res = s.substr(pos + 1, pos2 - 1);
//		string end = s.substr(pos2, s.size() - 1);
//		if (isFirst(first) && isEnd(end) && !res.empty())
//		{
//			return res;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	string s;
//	getline(cin, s);
//
//	string res = dealString(s);
//
//	cout << res << endl;
//	return 0;
//}