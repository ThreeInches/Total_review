#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution
{
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV)
	{
		if (pushV.size() == 0 || popV.size() == 0 || pushV.size() != popV.size())
		{
			return false;
		}

		stack<int> st;
		int j = 0;
		for (int i = 0; i < pushV.size(); i++)
		{
			st.push(pushV[i]);
			while(!st.empty() && st.top() == popV[j])
			{
				st.pop();
				j++;
			}
		}

		return st.empty();
	}
};

int main()
{
	Solution a;
	vector<int> push{ 1, 2, 3, 4, 5 };
	vector<int> pop{ 4, 5, 3, 2, 1 };
	cout << a.IsPopOrder(push, pop) << endl;
	system("pause");
	return 0;
}
