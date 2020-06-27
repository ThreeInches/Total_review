#include <iostream>

using namespace std;

struct ListNode {
    int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
	ListNode addTwoNumbers(ListNode l1, ListNode l2)
	{
		ListNode res = new ListNode(0);
		ListNode cur = res;

		int step = 0;
		while ((l1 != nullptr) || (l2 != nullptr))
		{
			int x = (l1 == nullptr) ? 0 : l1.val;
			int y = (l2 == nullptr) ? 0 : l2.val;

			int sum = x + y + step;
			step = sum / 10;
			sum = sum % 10;
			cur.next = new ListNode(sum);
			cur = cur.next;

			if (l1.next != nullptr)
			{
				l1 = l1.next;
			}
			if (l2.next != nullptr)
			{
				l2 = l2.next;
			}
		}
		if (step > 1)
		{
			cur.next = new ListNode(step);
		}

		return res.next;
	}
};

int main()
{

	system("pause");
	return 0;
}
