#include <iostream>
#include <queue>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:

	int deepestLeavesSum(TreeNode* root)
	{
		vector<vector<int>> res = levelOrder(root);
		int m = res.size();
		int n = res[m - 1].size();
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans += res[m - 1][i];
		}
		return ans;
	}

	vector<vector<int>> levelOrder(TreeNode* root)
	{
		vector<vector<int>> res;
		if (root == NULL)
		{
			return res;
		}
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			int size = q.size();
			vector<int> leval;
			while (size--)
			{
				TreeNode* cur = q.front();
				leval.push_back(cur->val);
				q.pop();
				if (!cur)
				{
					continue;
				}
				if (cur->left)
				{
					q.push(cur->left);
				}
				if (cur->right)
				{
					q.push(cur->right);
				}
			}
			if (leval.size())
			{
				res.push_back(leval);
			}
		}
		return res;
	}
};

int main()
{

	return 0;
}