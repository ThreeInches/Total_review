#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s, tmp;
	getline(cin, s);
	vector<string> vs;
	s = s + ' ';
	auto pos = s.find(' ');
	while (pos == string::npos)
	{
		tmp = s.substr(0, pos);
		vs.push_back(tmp);
		tmp.clear();
		s = s.substr(pos + 1);
		pos = s.find(' ');
	}

	return 0;
}