#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution
{
public:
	ListNode* reverseList(ListNode* head)
	{
		if (head == NULL)
		{
			return NULL;
		}
		ListNode* cur = head;
		ListNode* pre = NULL;
		while (cur)
		{
			ListNode* tmp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = tmp;
		}
		return cur;
	}
};

int main()
{

	return 0;
}