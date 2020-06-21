#include <iostream>
#include <algorithm>

using namespace std;



struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int getSum(TreeNode* root)
	{
		if (root == nullptr)
		{
			return 0;
		}

		int newSum = root->val;
		int Left = max(getSum(root->left), 0);
		int Right = max(getSum(root->right), 0);

		newSum = newSum + Left + Right;
		sum = max(newSum, sum);

		return root->val + max(Left, Right);
	}

	int maxPathSum(TreeNode* root)
	{
		getSum(root);
		return sum;
	}
private:
	int sum = INT_MIN;
};

int main()
{

	system("pause");
	return 0;
}
