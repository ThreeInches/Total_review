#include <iostream>

using namespace std;

namespace gwp
{
	template <class T>
	class ListNode
	{
	public:
		ListNode(const T& val = T())
			:m_pPre(nullptr)
			, m_pNext(nullptr)
			, m_val(val)
		{

		}

	private:
		ListNode<T> m_pPre;
		ListNode<T> m_pNext;
		T m_val;
	};

	template <class T, class Ref, class Ptr>
	class ListIterator
	{
		typedef ListNode<T>* pNode;
		typedef ListIterator<T, Ref, Ptr> Self;
	public:
		ListIterator(pNode pnode = nullptr)
			:m_pNode(pnode)
		{

		}

		ListIterator(const Self& l)
			:m_pNode(l.pNode)
		{

		}

		T& operator * ()
		{
			return m_pNode->m_val;
		}

		T& operator -> ()
		{
			return &(operator * ());
		}

		Self& operator ++ ()
		{
			m_pNode = m_pNode->m_pNext;
			return *this;
		}

		Self& operator ++ (int)
		{
			Self tmp(*this);
			m_pNode = m_pNode->m_pNext;
			return tmp;
		}

		Self& operator ++ ()
		{
			m_pNode = m_pNode->m_pPre;
			return *this;
		}

		Self& operator ++ (int)
		{
			Self tmp(*this);
			m_pNode = m_pNode->m_pPre;
			return tmp;
		}

		bool operator != (const Self& l)
		{
			return m_pNode != l.m_pNode;
		}

		bool operator == (const Self& l)
		{
			return m_pNode == l.m_pNode;
		}

	private:
		pNode m_pNode;
	};

	template <class T>
	class list
	{
		typedef ListNode<T> Node;
		typedef Node* pNode;
	public:

	private:

	};
}