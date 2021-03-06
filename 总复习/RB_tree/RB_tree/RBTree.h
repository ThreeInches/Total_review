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

template<class K, class V>
class RBTree
{
	typedef RBTreeNode<pair<K, V>> Node;
public:
	RBTree()
		:m_root(nullptr)
	{

	}

	pair<Node*, bool> Insert(const pair<K, V>& kv)
	{
		if (m_root == nullptr)
		{
			m_root = new Node(kv);
			m_root->m_col = BLACK;
			return make_pair(m_root, true);
		}

		Node* parent = nullptr;
		Node* cur = m_root;
		while (cur)
		{
			if (cur->m_data.first < kv.first)
			{
				parent = cur;
				cur = cur->m_right;
			}
			else if (cur->m_data.first > kv.first)
			{
				parent = cur;
				cur = cur->m_left;
			}
			else
			{
				return make_pair(cur, false);
			}
		}

		Node* newNode = new Node(kv);
		cur = newNode;
		cur->m_col = RED;
		if (parent->m_data.first < kv.first)
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
						//�ҵ���
						RotateR(grandfather);
						parent->m_col = BLACK;
						grandfather->m_col = RED;
					}
					else
					{
						//����˫�� 
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
						//�ҵ���
						RotateL(grandfather);
						parent->m_col = BLACK;
						grandfather->m_col = RED;
					}
					else
					{
						//����˫�� 
						RotateRL(grandfather);
						cur->m_col = BLACK;
						grandfather->m_col = RED;
					}

					break;
				}
			}
		}

		m_root->m_col = BLACK;

		return make_pair(newNode, true);
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
};