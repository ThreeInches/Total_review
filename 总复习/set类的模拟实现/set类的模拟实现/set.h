#pragma once
#include "RBTree.h"

namespace gwp
{
	template<class K>
	class set
	{	
	public:
		class SetKeyOfValue
		{
		public:
			const K& operator () (const K& data)
			{
				return data;
			}
		};

		typedef typename RBTree<K, K, SetKeyOfValue>::Iterator Iterator;
	public:
		pair<Iterator, bool> insert(const K& data)
		{
			return m_t.Insert(data);
		}

		Iterator begin()
		{
			return m_t.begin();
		}

		Iterator end()
		{
			return m_t.end();
		}

		Iterator rbegin()
		{
			return m_t.rbegin();
		}

		Iterator rend()
		{
			return m_t.rend();
		}

		void inorder()
		{
			m_t.InOrder();
		}
	private:
		RBTree<K, K, SetKeyOfValue> m_t;
	};
}
