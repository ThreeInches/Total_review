#include <iostream>

using namespace std;

struct listnode
{
	int val;
	listnode* next;
	listnode(int x)
		:val(x)
	{

	}
};

listnode* merge(listnode* left, listnode* right)
{
	listnode* res(0);
	res->next = nullptr;
	while (left && right)
	{
		if (left->val < right->val)
		{
			res->next = left;
			left = left->next;
			res = res->next;
		}
		else
		{
			res->next = right;
			right = right->next;
			res = res->next;
		}
	}
	res->next = left ? left : right;
	return res->next;
}

listnode* sortnode(listnode* head)
{
	if (head == nullptr && head->next == nullptr)
	{
		return nullptr;
	}
	listnode* p = head;
	listnode* q = head->next;
	while (p != nullptr || q->next != nullptr)
	{
		p = p->next;
		q = q->next->next;
	}
	listnode* left = sortnode(head);
	listnode* right = sortnode(p->next);
	return merge(left, right);
}

int main()
{

	return 0;
}