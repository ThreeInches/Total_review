template<class K, class V>
class AVLTreeNode
{
public:
	AVLTreeNode(const pair<K, V>& kv)
		:m_left(nullptr)
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
				return make_pair(cur, false>);
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
		return make_pair(cur, true);
	}
private:
	Node* m_root = nullptr;
};

void TestAVLTree()
{
	AVLTree<int, int> t;
	//t.insert(make_pair(1, 1));
}