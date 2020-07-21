#include <iostream>
#include <vector>

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
//	vector<int> printListFromTailToHead(ListNode* head)
//	{
//		vector<int> res;
//		while (head)
//		{
//			res.push_back(head->val);
//			head = head->next;
//		}
//
//		reverse(res.begin(), res.end());
//		return res;
//	}
//};

class Solution
{
public:

	void printListFromTailToHeadCore(ListNode* head, vector<int>& v)
	{
		if (head == NULL)
		{
			return;
		}
		else
		{
			printListFromTailToHeadCore(head->next, v);
			v.push_back(head->val);
		}
	}

	vector<int> printListFromTailToHead(ListNode* head)
	{
		vector<int> res;
		printListFromTailToHeadCore(head, res);
		return res;
	}
};

int main()
{

	system("pause");
	return 0;
}
