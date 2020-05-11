#pragma once

namespace gwp
{
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

			pNode cur = m_pRoot;
			pNode pre = nullptr;

			while (cur)
			{
				if (data < cur->m_data)
				{
					pre = cur;
					cur = cur->m_left;
				}
				else if (data > cur->data)
				{
					pre = cur;
					cur = cur->right;
				}
				else
				{
					return false;
				}
			}

			cur = new Node<T>(data);
			if (data < pre->m_data)
			{
				pre->m_left = cur;
			}
			else
			{
				pre->m_right = cur;
			}

			return true;
		}

		bool Erase(const T& data)
		{
			if (m_root == nullptr)
			{
				return false;
			}

			pNode cur = m_pRoot;
			pNode pre = nullptr;

			while (cur)
			{
				if (data < cur->m_data)
				{
					pre = cur;
					cur = cur->m_left;
				}
				else if (data > cur->data)
				{
					pre = cur;
					cur = cur->right;
				}
				else
				{
					return break;
				}
			}

			if (cur = nullptr)
			{
				return false;
			}

			if (cur->m_left && cur->m_right)
			{
				pNode cur2 = cur->m_left;
				pNode pre2 = cur;

				if (cur2->m_right)
				{
					for (; cur2->m_right; pre2 = cur2, cur2 = cur2->m_right);
					pre2->m_right = cur2->m_left;
					cur2->m_left = cur->m_left;
				}

				cur2->m_right = cur->m_right;

				if (cur->m_data < pre->m_data)
				{
					pre->m_left = cur2;
				}
				else
				{
					pre->m_right = cur2;
				}

				delete cur;
			}
			else if (cur->m_left)
			{
				if (cur->m_data < pre->m_data)
				{
					pre->m_left = cur->m_left;
				}
				else
				{
					pre->m_right = cur->m_right;
				}
				delete cur;
			}
			else
			{
				if (cur->m_data < pre->m_data)
				{
					pre->m_left = cur->m_left;
				}
				else
				{
					pre->m_right = cur->m_right;
				}
				delete cur;
			}
		}

		void InOrder()
		{

		}
	private:
		pNode m_pRoot;
	};
}