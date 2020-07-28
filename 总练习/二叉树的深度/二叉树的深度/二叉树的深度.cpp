#include <iostream>
#include <algorithm>
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

//class Solution {
//public:
//	int TreeDepth(TreeNode* pRoot)
//	{
//		if (pRoot == NULL)
//		{
//			return 0;
//		}
//
//		return 1 + max(TreeDepth(pRoot->left), TreeDepth(pRoot->right));
//	}
//};

class Solution {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return 0;
		}
		queue<TreeNode*> cur;
		cur.push(pRoot);
		int depth = 0;
		while (!cur.empty())
		{
			int size = cur.size();
			depth++;
			for (int i = 0; i < size; i++)
			{
				TreeNode* root = cur.front();
				cur.pop();
				if (root->left)
				{
					cur.push(root->left);
				}
				if (root->right)
				{
					cur.push(root->right);
				}
			}
		}

		return depth;
	}
};

int main()
{

	system("pause");
	return 0;
}
