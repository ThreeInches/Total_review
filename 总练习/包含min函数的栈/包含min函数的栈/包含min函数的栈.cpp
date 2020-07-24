#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
	void push(int value)
	{
		if (min_st.empty() || min_st.top() > value)
		{
			min_st.push(value);
		}
		else
		{
			min_st.push(min_st.top());
		}

		data_st.push(value);
	}

	void pop()
	{
		data_st.pop();
		min_st.pop();
	}

	int top()
	{
		return data_st.top();
	}

	int min()
	{
		return min_st.top();
	}
private:
	stack<int> data_st;//Êı¾İÕ»
	stack<int> min_st;//¸¨ÖúÕ»
};

int main()
{
	Solution a;
	system("pause");
	return 0;
}
