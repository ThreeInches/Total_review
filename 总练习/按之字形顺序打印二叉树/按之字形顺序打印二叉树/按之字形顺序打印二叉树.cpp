#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
	val(x), left(NULL), right(NULL)
	{

	}
};

class Solution
{
public:
	vector<vector<int> > Print(TreeNode* pRoot)
	{
		vector<vector<int>> res;
		if (pRoot == nullptr)
		{
			return res;
		}

		queue<TreeNode*> qu;
		qu.push(pRoot);
		vector<int> tmp;
		while (!qu.empty())
		{
			TreeNode* cur = qu.front();
			tmp.push_back(cur->val);
			qu.pop();
			if (cur->left)
			{
				qu.push(cur->left);
			}
			if (cur->right)
			{
				qu.push(cur->right);
			}
		}

		for (int i = 0; i < tmp.size(); i++)
		{
			if (i % 2 == 0)
			{
				res.push_back(tmp);
			}
			else
			{
				reverse(tmp.begin(), tmp.end());
				res.push_back(tmp);
			}
		}

		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
