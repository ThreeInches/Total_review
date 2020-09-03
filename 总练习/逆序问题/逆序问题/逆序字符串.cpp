#include <istream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		if (s == "")
		{
			return "";
		}

		while (s[0] == ' ' || s[s.size() - 1] == ' ')
		{
			if (s[0] == ' ')
			{
				s.erase(0);
			}
			if (s[s.size() - 1] == ' ')
			{
				s.erase(s.size() - 1);
			}
		}
		vector<string> tmp;
		string ss;
		string str = s + ' ';
		int size = str.size();
		auto pos = str.find(' ');
		while (pos != string::npos)
		{
			ss = str.substr(0, pos);
			tmp.push_back(ss);
			str = str.substr(pos + 1, size);
			pos = str.find(' ');
		}

		string res;
		int i = tmp.size() - 1;
		for (; i > 0; i--)
		{
			string o;
			o = tmp[i] + ' ';
			res = res + o;
		}
		return res + tmp[i];
	}
};

int main()
{

	return 0;
}