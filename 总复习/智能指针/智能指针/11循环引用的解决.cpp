#include <iostream>
#include <memory>

using namespace std;

//将shared_ptr改成weak_ptr
//node1->m_next = node2  node2->m_prev = node1  此时的weak_ptr的m_next和m_prev不会增加node1和node2的引用计数

class ListNode
{
public:
	int m_data;
	weak_ptr<ListNode> m_prev;
	weak_ptr<ListNode> m_next;
public:
	~ListNode()
	{
		cout << "~ListNode()" << endl;
	}
};

int main()
{
	shared_ptr<ListNode> node1(new ListNode);
	shared_ptr<ListNode> node2(new ListNode);

	cout << node1.use_count() << endl;
	cout << node2.use_count() << endl;

	node1->m_next = node2;
	node2->m_prev = node1;

	cout << node1.use_count() << endl;
	cout << node2.use_count() << endl;
	system("pause");
	return 0;
}
