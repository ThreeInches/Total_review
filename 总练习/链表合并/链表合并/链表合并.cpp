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

//class Solution
//{
//public:
//	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//	{
//		if (pHead1 == nullptr)
//		{
//			return pHead2;
//		}
//
//		if (pHead2 == nullptr)
//		{
//			return pHead1;
//		}
//
//		ListNode* head = nullptr;
//		ListNode* end = nullptr;
//
//		while (pHead1 && pHead2)
//		{
//			ListNode* cur = pHead1->val < pHead2->val ? pHead1 : pHead2;
//			if (cur == pHead1)
//			{
//				pHead1 = pHead1->next;
//			}
//			else
//			{
//				pHead2 = pHead2->next;
//			}
//
//			if (head == nullptr)
//			{
//				head = cur;
//				end = cur;
//			}
//			else
//			{
//				end->next = cur;
//				end = end->next;
//			}
//		}
//
//		if (pHead1 == nullptr)
//		{
//			end->next = pHead2;
//		}
//
//		if (pHead2 == nullptr)
//		{
//			end->next = pHead1;
//		}
//
//		return head;
//	}
//};

class Solution
{
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == nullptr)
		{
			return pHead2;
		}

		if (pHead2 == nullptr)
		{
			return pHead1;
		}

		ListNode* head = nullptr;

		if (pHead1->val > pHead2->val)
		{
			head = pHead2;
			pHead2 = pHead2->next;
		}
		else
		{
			head = pHead1;
			pHead1 = pHead1->next;
		}

		head->next = Merge(pHead1, pHead2);
		return head;
	}
};

int main()
{
	ListNode* head;

	system("pause");
	return 0;
}
