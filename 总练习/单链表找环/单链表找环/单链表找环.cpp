//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<int> a;
//	int num;
//	string str;
//	getline(cin, str);
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			num = (str[i] - '0');
//			a.push_back(num);
//		}
//	}
//	if (a.empty())
//	{
//		cout << "false" << endl;
//		return 0;
//	}
//	sort(a.begin(), a.end());
//	for (int i = 0; i < a.size() - 1; i++)
//	{
//		if (a[i] == a[i + 1])
//		{
//			cout << "true" << endl;
//			return 0;
//		}
//	}
//
//	cout << "false" << endl;
//
//
//	return 0;
//}