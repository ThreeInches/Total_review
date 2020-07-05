#include <iostream>
#include <vector>

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
	TreeNode* sortedArrayToBST(vector<int>& nums)
	{
		if (nums.empty())
		{
			return nullptr;
		}

		TreeNode* cur = new TreeNode(nums[0]);
		TreeNode* parent = new TreeNode(0);
		while (cur)
		{
			if (cur->val < nums[0])
			{

			}
		}
	}
};

int main()
{

	system("pause");
	return 0;
}
