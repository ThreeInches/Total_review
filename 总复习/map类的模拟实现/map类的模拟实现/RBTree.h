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

template<class V>
class RBTreeIterator
{
	typedef RBTreeNode<V> Node;
	typedef RBTreeIterator<V> self;
public:
	RBTreeIterator(Node* node)
		:m_node(node)
	{

	}

	V& operator * ()
	{
		return m_node->m_data;
	}

	V* operator -> ()
	{
		return &(m_node->m_data);
	}

	bool operator == (const self& s)
	{
		return m_node = s.m_node;
	}

	bool operator != (const self& s)
	{
		return m_node != s.m_node;
	}

	self& operator ++ ()
	{
		Increasement();
		return *this;
	}

	self operator ++ (int)
	{
		self tmp = *this;
		Increasement();
		return tmp;
	}

	self& operator -- ()
	{
		Decreasement();
		return *this;
	}

	self operator -- (int)
	{
		self tmp = *this;
		Decreasement();
		return tmp;
	}

private:
	void Increasement()
	{
		//右子树存在，找右子树的最左侧节点
		if (m_node->m_right)
		{
			m_node = m_node->m_right;
			while (m_node->m_left)
			{
				m_node = m_node->m_left;
			}
		}
		//右子树不存在，向上找，直到m_node ！= parent_m_right
		else
		{
			Node* parent = m_node->m_parent;
			while (m_node == parent->m_right)
			{
				m_node = parent;
				parent = m_node->m_parent;
			}

			if (m_node != = parent->m_right)
			{
				m_node = parent;
			}
		}
	}

	void Decreasement()
	{
		//m_node在head位置，将m_node放在红黑树中最大节点的位置
		if ((m_node->m_parent->m_parent == m_node) && (m_node->m_col == RED))
		{
			m_node = m_node->m_right;
		}
		//m_node的左子树存在，找左子树的左右边节点
		else if (m_node->m_left)
		{
			m_node = m_node->m_left;
			while (m_node->m_right)
			{
				m_node = m_node->m_right;
			}
		}
		//左子树不存在，向上找
		else
		{
			Node* parent = m_node->m_parent;
			while (m_node == parent->m_left)
			{
				m_node = parent;
				parent = m_node->m_parent;
			}
			m_node = parent;
		}
	}
private:
	Node* m_node;
};

template<class K, class V, class KeyOfValue>
class RBTree
{
	typedef RBTreeNode<V> Node;
public:
	typedef RBTreeIterator<V> Iterator;
protected:
	void destory(Node* root)
	{
		if (root)
		{
			destory(root->m_left);
			destory(root->m_right);
			delete root;
		}
	}

	void copy(Node* root)
	{
		Node* newNode = nullptr;
		Node* cur = root;
		while (cur)
		{
			newNode = new Node(cur->m_data);
			newNode->m_left = copy(cur->m_left);
			newNode->m_right = copy(cur->m_right);
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

	RBTree(const RBTree<K, V, KeyOfValue>& tree)
	{
		copy(tree.m_root);
	}

	~RBTree()
	{
		destory(m_root);
	}

	RBTree<K, V, KeyOfValue>& operator = (const RBTree<K, V, KeyOfValue>& tree)
	{
		RBTree<K, V, KeyOfValue> tmp = tree;
		swap(m_root, tree.m_root);
		return *this;
	}

	Iterator begin()
	{
		Node* cur = m_root;
		while (cur && cur = cur->m_left)
		{
			cur = cur->m_left;
		}
		return Iterator(cur);
	}

	Iterator end()
	{
		return Iterator(nullptr);
	}

	Iterator rbegin()
	{
		Node* cur = m_root;
		while (cur && cur = cur->m_right)
		{
			cur = cur->m_right;
		}
		return Iterator(cur);
	}

	Iterator rend()
	{
		return Iterator(nullptr);
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
						//右单旋
						RotateR(grandfather);
						parent->m_col = BLACK;
						grandfather->m_col = RED;
					}
					else
					{
						//左右双旋 
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
						//右单旋
						RotateL(grandfather);
						parent->m_col = BLACK;
						grandfather->m_col = RED;
					}
					else
					{
						//左右双旋 
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

	Iterator Find(const K& key)
	{
		KeyOfValue kov;
		Node* cur = m_root;
		while (cur)
		{
			if (kov(cur->m_data) > key)
			{
				cur = cur->m_right;
			}
			else if (kov(cur->m_data) < key)
			{
				cur = cur->m_left;
			}
			else
			{
				return Iterator(cur);
			}
		}

		return Iterator(nullptr);
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