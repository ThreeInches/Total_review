#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		if (head == NULL)
		{
			return NULL;
		}
		if (head->val == val)
		{
			return head->next;
		}
		ListNode* cur = head;
		for (; cur->next != NULL; cur = cur->next)
		{
			if (cur->next->val == val)
			{
				cur->next = cur->next->next;
			}
		}

		if (cur->next->val == val)
		{
			cur->next = NULL;
		}
		return head;

	}
};

int main()
{
	Solution a;

	return 0;
}