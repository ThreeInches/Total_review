#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x)
		:val(x)
		,next(NULL)
	{

	}
};

class Solution
{
public:
	ListNode* getListLen(ListNode* head, int& len)
	{
		if (head == nullptr)
		{
			return nullptr;
		}

		ListNode* end = head;
		while (end)
		{
			end = head;
			end = head->next;
			len++;
		}

		return end;
	}

	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == nullptr || pHead2 == nullptr)
		{
			return nullptr;
		}

		int len1 = 0;
		int len2 = 0;
		ListNode* end1 = getListLen(pHead1, len1);
		ListNode* end2 = getListLen(pHead2, len2);
		int step = abs(len1 - len2);
		if (end1 != end2)
		{
			return nullptr;
		}
		if (len1 > len2)
		{
			while (step)
			{
				pHead1 = pHead1->next;
				step--;
			}
		}
		else
		{
			while (step)
			{
				pHead2 = pHead2->next;
				step--;
			}
		}

		while (pHead1&&pHead2)
		{
			if (pHead1 == pHead2)
			{
				return pHead1;
			}
			pHead1 = pHead1->next;
			pHead2 = pHead2->next;
		}

		return nullptr;
	}
};

int main()
{

	system("pause");
	return 0;
}
