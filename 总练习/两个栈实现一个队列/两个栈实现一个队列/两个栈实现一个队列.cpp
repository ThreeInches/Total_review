#include <iostream>
#include <stack>

using namespace std;

class CQueue
{
public:
	CQueue()
	{
		while (!s1.empty())
		{
			s1.pop();
		}
		while (!s2.empty())
		{
			s2.pop();
		}
	}

	void appendTail(int value)
	{
		s1.push(value);
	}

	int deleteHead()
	{
		if (s2.empty())
		{
			if (s1.empty())
			{
				return -1;
			}
			else
			{
				while (!s1.empty())
				{
					int tmp = s1.top();
					s1.pop();
					s2.push(tmp);
				}
			}
		}

		int res = s2.top();
		s2.pop();
		return res;
	}
private:
	stack<int> s1;
	stack<int> s2;
};

int main()
{
	CQueue* obj = new CQueue();
	obj->appendTail(3);
	int param_2 = obj->deleteHead();
	return 0;
}