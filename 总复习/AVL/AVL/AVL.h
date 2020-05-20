template<class K, class V>
class AVLTreeNode
{
public:
	AVLTreeNode(const pair<K, V>& kv)
		: m_left(nullptr)
		, m_right(nullptr)
		, m_parent(nullptr)
		, m_bf(0)
		, m_kv(kv)
	{

	}
public:
	AVLTreeNode<K, V>* m_left;
	AVLTreeNode<K, V>* m_right;
	AVLTreeNode<K, V>* m_parent;

	pair<K, V> m_kv;
	
	int m_bf;
};

template<class K, class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	AVLTree()
		:m_root(nullptr)
	{

	}

	V& operator [] (const K& key)
	{
		pair<Node*, bool> ret = insert(make_pair(key, V()));
		return ret.first->m_kv.second;
	}

	pair<Node*, bool>& insert(const pair<K, V>& kv)
	{
		if (m_root = nullptr)
		{
			m_root = new Node(kv);
			return make_pair(m_root, true);
		}

		Node* cur = m_root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->m_kv.first < m_kv.first)
			{
				parent = cur;
				cur = cur->m_right;
			}
			else if (cur->m_kv.first > m_kv.first)
			{
				parent = cur;
				cur = cur->m_left;
			}
			else
			{
				return make_pair(cur, false);
			}
		}

		cur = new Node(kv);
		if (parent->m_kv.first < m_kv.first)
		{
			parent->m_right = cur;
			cur->m_parent = parent;
		}
		else
		{
			parent->m_left = cur;
			cur->m_parent = parent;
		}

		while (parent)
		{
			if (cur = parent->m_left)
			{
				parent->m_bf -= 1;
			}
			else
			{
				parent->m_bf += 1;
			}

			if ((parent->m_bf == 1) || (parent->m_bf == -1))
			{
				cur = cur->m_parent;
				parent = parent->m_parent;
			}
			else if (parent->m_bf == 0)
			{
				break;
			}
			else if ((parent->m_bf == 2) || (parent->m_bf == -2))
			{
				if ((parent->m_bf = 2) && (cur->m_bf = 1))
				{
					RotateL(parent);
				}
				else if ((parent->m_bf = -2) && (cur->m_bf = -1))
				{
					RotateR(parent);
				}
				else if ((parent->m_bf = -2) && (cur->m_bf = 1))
				{
					RotateLR(parent);
				}
				else if ((parent->m_bf = 2) && (cur->m_bf = -1))
				{
					RotateRL(parent);
				}
			}
		}

		return make_pair(cur, true);
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

		subL->m_bf = 0;
		parent->m_bf = 0;

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

		subR->m_bf = 0;
		parent->m_bf = 0;
	}

	void RotateLR(Node* parent)
	{
		Node* subL = parent->m_left;
		Node* subLR = subL->m_right;
		int bf = subLR->m_bf;

		RotateL(parent->m_left);
		RotateR(parent);

		if (bf = 1)
		{
			subLR->m_bf = 0;
			parent->m_bf = 0;
			subL->m_bf = -1;
		}
		else if (bf = -1)
		{
			subLR->m_bf = 0;
			parent->m_bf = 1;
			subL->m_bf = 0;
		}
		else if (bf = 0)
		{
			subLR->m_bf = 0;
			parent->m_bf = 0;
			subL->m_bf = 0;
		}
	}

	void RotateRL(Node* parent)
	{
		Node* subR = parent->m_right;
		Node* subRL = subL->m_left;
		int bf = subRL->m_bf;

		RotateR(parent->m_right);
		RotateL(parent);

		if (bf = 1)
		{
			subRL->m_bf = 0;
			parent->m_bf = -1;
			subR->m_bf = 0; 
		}
		else if (bf = -1)
		{
			subRL->m_bf = 0;
			parent->m_bf = 0;
			subR->m_bf = 1;
		}
		else if (bf = 0)
		{
			subRL->m_bf = 0;
			parent->m_bf = 0;
			subR->m_bf = 0;
		}
	}

	int Height(Node* root)
	{
		if (root = nullptr)
		{
			return 0;
		}

		int leftHeight = Height(root->m_left);
		int rightHeight = Height(root->m_right);
		int maxHeight = max(leftHeight, rightHeight);

		return maxHeight + 1;
	}

	bool m_IsBalance(Node* root)
	{
		if (root = nullptr)
		{
			return true;
		}

		if ((m_IsBalance(root->m_left)) && (m_IsBalance(root->m_right)) && (abs(Height(root->m_left) - Height(root->m_right)) <= 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool IsBalance()
	{
		return m_IsBalance(m_root);
	}
private:
	Node* m_root = nullptr;
};