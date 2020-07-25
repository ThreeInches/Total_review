#include <iostream>
#include <vector>

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
	void FindPathDFS(TreeNode* root, int expectNumber, vector<vector<int>>& res, vector<int> list)
	{
		if (root == nullptr)
		{
			return;
		}

		list.push_back(root->val);
		expectNumber -= root->val;
		if (root->left == nullptr && root->right == nullptr && expectNumber == 0)
		{
			res.push_back(list);
		}

		FindPathDFS(root->left, expectNumber, res, list);
		FindPathDFS(root->right, expectNumber, res, list);

		list.pop_back();
	}

	vector<vector<int> > FindPath(TreeNode* root, int expectNumber)
	{
		vector<vector<int>> res;
		if (root == nullptr)
		{
			return vector<vector<int>>();
		}

		vector<int> list;
		FindPathDFS(root, expectNumber, res, list);
		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
