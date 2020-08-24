#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL)
		{
			return NULL;
		}
		int lena = 0;
		int lenb = 0;
		ListNode* cur;
		for (cur = headA; cur != NULL; cur = headA->next)
		{
			lena++;
		}
		for (cur = headB; cur != NULL; cur = headB->next)
		{
			lenb++;
		}

		int c = abs(lena - lenb);
		if (lena < lenb)
		{
			while (c--)
			{
				headB = headB->next;
			}
			while (headA && headB)
			{
				if (headA->val != headB->val)
				{
					headA = headA->next;
					headB = headB->next;
				}
				return headA;
			}
		}
		else
		{
			while (c--)
			{
				headA = headA->next;
			}
			while (headA && headB)
			{
				if (headA->val != headB->val)
				{
					headA = headA->next;
					headB = headB->next;
				}
				return headA;
			}
		}
	}
};

int main()
{
	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
		{
			return 0;
		}
	}
	return 0;
}