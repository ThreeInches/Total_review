#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
//class Solution {
//public:
//	TreeNode* mirrorTree(TreeNode* root) {
//		if (root == NULL)
//		{
//			return NULL;
//		}
//		queue<TreeNode*> qu;
//		qu.push(root);
//		while (!qu.empty())
//		{
//			TreeNode* cur = qu.front();
//			qu.pop();
//			if (cur == NULL)
//			{
//				continue;
//			}
//			swap(cur->left, cur->right);
//			qu.push(cur->left);
//			qu.push(cur->right);
//		}
//		return root;
//	}
//};

//class Solution {
//public:
//	TreeNode* mirrorTree(TreeNode* root) {
//		if (root == NULL)
//		{
//			return NULL;
//		}
//		swap(root->left, root->right);
//		mirrorTree(root->left);
//		mirrorTree(root->right);
//		return root;
//	}
//};

class Solution
{
public:
	bool isHuiwen(vector<int>& res)
	{
		int left = 0;
		int right = res.size() - 1;
		if ((right - left) % 2 == 0)
		{
			return false;
		}
		while (left < right)
		{
			if (res[left] != res[right])
			{
				return false;
			}
			left++;
			right--;
		}
		return true;
	}

	bool isSymmetric(TreeNode* root)
	{
		if (root == NULL)
		{
			return true;
		}
		vector<int> node;
		queue<TreeNode*> qu;
		qu.push(root);
		while (!qu.empty())
		{
			queue<TreeNode*> tmp = qu;
			int size = tmp.size();
			for (int i = 0; i < size; i++)
			{
				TreeNode* cur = tmp.front();
				node.push_back(cur->val);
				tmp.pop();
				if (cur->left)
				{
					tmp.push(cur->left);
				}
				if (cur->right)
				{
					tmp.push(cur->right);
				}
			}
			if (!isHuiwen(node))
			{
				return false;
			}
		}
		return true;
	}
};

int main()
{


	return 0;
}