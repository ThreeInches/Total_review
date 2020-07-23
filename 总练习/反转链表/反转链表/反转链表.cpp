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
	ListNode* ReverseList(ListNode* pHead)
	{
		if (pHead == nullptr || pHead->next == nullptr)
		{
			return pHead;
		}

		ListNode* left = pHead;
		ListNode* mid = left->next;
		ListNode* right = mid->next;

		while (right != nullptr)
		{
			mid->next = left;
			left = mid;
			mid = right;
			right = right->next;
		}

		mid->next = left;
		left->next = nullptr;
		pHead = mid;

		return pHead;
	}
};

int main()
{

	system("pause");
	return 0;
}
