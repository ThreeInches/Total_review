#include <iostream>

using namespace std;

template<class T>
class BSTNode
{
public:
	BSTNode(const T& data = T())
		:m_pleft(nullptr)
		, m_pright(nullptr)
		, m_data(data)
	{

	}
public:
	BSTNode<T>* m_pleft;
	BSTNode<T>* m_pright;
	T m_data;
};

template<class T>
class BSTree
{
	typedef BSTNode<T> Node;
	typedef Node* pNode;
public:
	BSTree()
		:m_pRoot(nullptr)
	{

	}

	~BSTree()
	{

	}

	pNode Find(const T& data)
	{

	}

	bool Insert(const T& data)
	{
		if (m_pRoot == nullptr)
		{
			m_pRoot = new Node(data);
			return true;
		}


	}

	bool Erase(const T& data)
	{

	}

	void InOrder()
	{

	}
private:
	pNode m_pRoot;
};

int main()
{

	system("pause");
	return 0;
}
