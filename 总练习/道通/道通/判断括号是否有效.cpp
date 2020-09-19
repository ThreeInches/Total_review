#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool Deal(string& str)
{
	stack<char> s;

	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case '(':
			s.push(str[i]);
			break;
		case '[':
			s.push(str[i]);
			break;
		case '{':
			s.push(str[i]);
			break;
		case ')':
			if (s.top() != '(')
			{
				return false;
			}
			else
			{
				s.pop();
			}
			break;
		case ']':
			if (s.top() != '[')
			{
				return false;
			}
			else
			{
				s.pop();
			}
			break;
		case '}':
			if (s.top() != '{')
			{
				return false;
			}
			else
			{
				s.pop();
			}
			break;
		default:
			break;
		}
	}
	return s.empty();
}

int main()
{
	string str;
	getline(cin, str);
	if (Deal(str))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	return 0;
}