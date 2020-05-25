#pragma once
#include <iostream>
using namespace std;

enum Colour
{
	BLACK,
	RED
};

template<class T>
class RBTreeNode
{
public:
	RBTreeNode(const T& data)
		:m_left(nullptr)
		, m_right(nullptr)
		, m_parent(nullptr)
		, m_data(data)
		, m_col(BLACK)
	{

	}
public:
	RBTreeNode<T>* m_left;
	RBTreeNode<T>* m_right;
	RBTreeNode<T>* m_parent;

	T m_data;

	Colour m_col;
};

template<class K, class V, class KeyOfValue>
class RBTree
{
	typedef RBTreeNode<V> Node;
public:
	typedef RBTreeIterator<V, V*, V&> Iterator;
private:
	void destory(Node* root)
	{
		if (root)
		{
			destory(root->m_left);
			destory(root->m_right);
			delete root;
		}
	}

	void RotateR(Node* parent)
	{
		Node* subL = parent->m_left;
		Node* subLR = subL->m_right;

		parent->m_left = subLR;
		if (subLR)
		{
			subLR->m_parent = parent;
		}

		subL->m_right = parent;

		Node* parentParent = parent->m_parent;
		if (parent == m_root)
		{
			m_root = subL;
			subL->m_parent = nullptr;
		}
		else
		{
			if (parentParent->m_left == parent)
			{
				parentParent->m_left = subL;
			}
			else
			{
				parentParent->m_right = subL;
			}
		}

		subL->m_parent = parentParent;

	}

	void RotateL(Node* parent)
	{
		Node* subR = parent->m_right;
		Node* subRL = subR->m_left;

		parent->m_right = subRL;
		if (subRL)
		{
			subRL->m_parent = parent;
		}

		subR->m_left = parent;

		Node* parentParent = parent->m_parent;
		if (parent == m_root)
		{
			m_root = subR;
			subR->m_parent = nullptr;
		}
		else
		{
			if (parentParent->m_left == parent)
			{
				parentParent->m_left = subR;
			}
			else
			{
				parentParent->m_right = subR;
			}
		}

		subR->m_parent = parentParent;

	}

	void RotateLR(Node* parent)
	{
		RotateL(parent->m_left);
		RotateR(parent);
	}

	void RotateRL(Node* parent)
	{
		RotateR(parent->m_right);
		RotateL(parent);
	}
public:
	RBTree()
		:m_root(nullptr)
	{

	}

	~RBTree()
	{
		destory(m_root);
	}

	Iterator begin()
	{
		return Iterator(m_root->m_left);
	}

	Iterator end()
	{
		return Iterator(m_root->m_right);
	}

	pair<Iterator, bool> Insert(const V& data)
	{
		if (m_root == nullptr)
		{
			m_root = new Node(data);
			m_root->m_col = BLACK;
			return make_pair(Iterator(m_root), true);
		}

		Node* parent = nullptr;
		Node* cur = m_root;
		KeyOfValue kov;
		while (cur)
		{
			if (kov(cur->m_data) < kov(data))
			{
				parent = cur;
				cur = cur->m_right;
			}
			else if (kov(cur->m_data) > kov(data))
			{
				parent = cur;
				cur = cur->m_left;
			}
			else
			{
				return make_pair(Iterator(cur), false);
			}
		}

		Node* newNode = new Node(data);
		cur = newNode;
		cur->m_col = RED;
		if (kov(parent->m_data) < kov(data))
		{
			parent->m_right = cur;
			cur->m_parent = parent;
		}
		else
		{
			parent->m_left = cur;
			cur->m_parent = parent;
		}

		while (parent && parent->m_col == RED)
		{
			Node* grandfather = parent->m_parent;
			if (parent == grandfather->m_left)
			{
				Node* uncle = grandfather->m_right;
				if (uncle && uncle->m_col == RED)
				{
					parent->m_col = BLACK;
					uncle->m_col = BLACK;
					grandfather->m_col = RED;

					cur = grandfather;
					parent = cur->m_parent;
				}
				else
				{
					if (cur == parent->m_left)
					{
						//ÓÒµ¥Ðý
						RotateR(grandfather);
						parent->m_col = BLACK;
						grandfather->m_col = RED;
					}
					else
					{
						//×óÓÒË«Ðý 
						RotateLR(grandfather);
						cur->m_col = BLACK;
						grandfather->m_col = RED;
					}

					break;
				}
			}
			else
			{
				Node* uncle = grandfather->m_left;
				if (uncle && uncle->m_col == RED)
				{
					parent->m_col = BLACK;
					uncle->m_col = BLACK;
					grandfather->m_col = RED;

					cur = grandfather;
					parent = cur->m_parent;
				}
				else
				{
					if (cur == parent->m_right)
					{
						//ÓÒµ¥Ðý
						RotateL(grandfather);
						parent->m_col = BLACK;
						grandfather->m_col = RED;
					}
					else
					{
						//×óÓÒË«Ðý 
						RotateRL(grandfather);
						cur->m_col = BLACK;
						grandfather->m_col = RED;
					}

					break;
				}
			}
		}

		m_root->m_col = BLACK;

		return make_pair(Iterator(newNode), true);
	}

	void m_InOrder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}

		m_InOrder(root->m_left);
		cout << root->m_data.first << ":" << root->m_data.second << endl;
		m_InOrder(root->m_right);
	}

	void InOrder()
	{
		return m_InOrder(m_root);
	}

private:
	Node* m_root;
	size_t m_size;
};