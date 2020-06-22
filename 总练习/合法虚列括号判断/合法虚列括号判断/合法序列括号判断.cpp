#include <iostream>
#include <stack>

using namespace std;

class Parenthesis
{
public:
	bool chkParenthesis(string A, int n)
	{
		stack<char> s;
		int i = 0;

		while (i < n)
		{
			if (A[i] == '(')
			{
				s.push(A[i]);
				i++;
			}
			else if (A[i] == ')')
			{
				if (s.empty() || s.top() != '(')
				{
					return false;
				}
				else
				{
					s.pop();
					i++;
				}
			}
			else
			{
				i++;
			}
		}

		if (s.empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Parenthesis a;
	cout << a.chkParenthesis("(()())", 6) << endl;
	cout << a.chkParenthesis("()a()()", 7) << endl;
	cout << a.chkParenthesis("()(()()", 7) << endl;
	system("pause");
	return 0;
}
