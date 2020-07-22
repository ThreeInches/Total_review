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
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
	{
		if (pListHead == nullptr || k < 0)
		{
			return nullptr;
		}

		ListNode* front = pListHead;
		ListNode* rear = pListHead;

		while (k>0 && front != nullptr)
		{
			k--;
			front = front->next;
		}

		while (front != nullptr)
		{
			front = front->next;
			rear = rear->next;
		}

		return (k > 0) ? nullptr : rear;
	}
};

int main()
{

	system("pause");
	return 0;
}
