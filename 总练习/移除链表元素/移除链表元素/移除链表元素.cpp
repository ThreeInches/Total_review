#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution
{
public:
	ListNode* removeElements(ListNode* head, int val)
	{
		if (head == NULL)
		{
			return NULL;
		}
		while (head && head->val == val)
		{
			head = head->next;
		}

		ListNode* cur = head;
		while (cur)
		{
			if (cur->next && cur->next->val == val)
			{
				cur->next = cur->next->next;
			}
			else
			{
				cur = cur->next;
			}
		}

		return head;
	}
};

int main()
{

	return 0;
}