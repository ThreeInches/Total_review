#include <iostream>
#include <unordered_set>

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
	 ListNode* removeDuplicateNodes(ListNode* head)
	 {
		 if (head == nullptr)
		 {
			 return head;
		 }

		 unordered_set<int> us = { head->val };
		 ListNode* pos = head;
		 while (pos->next != nullptr)
		 {
			 ListNode* cur = pos->next;
			 if (!us.count(cur->val))
			 {
				 us.insert(cur->val);
				 pos = pos->next;
			 }
			 else
			 {
				 pos->next = pos->next->next;
			 }
		 }
		 pos->next = nullptr;

		 return head;
	 }
 };

int main()
{

	system("pause");
	return 0;
}
