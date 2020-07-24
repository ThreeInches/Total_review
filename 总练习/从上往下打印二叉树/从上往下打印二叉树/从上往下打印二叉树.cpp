#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
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
	vector<int> PrintFromTopToBottom(TreeNode* root)
	{
		vector<int> res;
		queue<TreeNode*> qu;

		if (root == nullptr)
		{
			return vector<int>();
		}

		qu.push(root);
		while (!qu.empty())
		{
			TreeNode* cur = qu.front();
			qu.pop();
			res.push_back(cur->val);
			if (cur->left)
			{
				qu.push(cur->left);
			}
			if (cur->right)
			{
				qu.push(cur->right);
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
