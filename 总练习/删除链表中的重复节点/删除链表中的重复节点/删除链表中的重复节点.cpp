#include <iostream>

using namespace std;


struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL)
	{

	}
};

class Solution
{
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == nullptr)
		{
			return pHead;
		}

		ListNode* head = new ListNode(0);
		head->next = pHead;
		ListNode* prev = head;
		ListNode* last = prev->next;

		while (last)
		{
			while (last->next && last->val != last->next->val)
			{
				prev = last;
				last = last->next;
			}

			while (last->next&& last->val == last->next->val)
			{
				last = last->next;
			}

			if (prev->next != last)
			{
				prev->next = last->next;
			}

			last = last->next;
		}

		return head->next;
	}
};

int main()
{

	system("pause");
	return 0;
}
