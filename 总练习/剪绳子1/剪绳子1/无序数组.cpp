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
		if (root == NULL)
		{
			return 0;
		}
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			int size = q.size();
			while (size--)
			{
				TreeNode* cur = q.front();
				cout << cur->val << ' ';
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
			cout << endl;
		}
	}
};

int main()
{
	TreeNode* root;
	root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	Solution a;
	cout << a.deepestLeavesSum(root) << endl;
	return 0;
}