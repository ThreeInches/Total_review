#include <iostream>
#include <memory>

using namespace std;

//循环引用的分析
//1、node1和node2两个智能指针对象指向两个节点，引用计数变成1，不需要手动delete
//2、node1的m_pnext指向node2，node2的m_prev指向node1，引用计数变成2
//3、node1和node2析构，引用计数减1，但是m_next还是指向下一个节点，但是m_prev还是指向上一个节点
//4、m_next是node1的成员，m_prev是node2的成员，只有node1和node2析构，m_next和m_prev才会析构，这就构成了循环引用，谁都不会释放

class ListNode
{
public:
	int m_data;
	shared_ptr<ListNode> m_prev;
	shared_ptr<ListNode> m_next;
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
