#pragma once
#include "RBTree.h"

namespace gwp
{
	template<class K, class V>
	class map
	{public:
		class MapKeyOfValue
		{
		public:
			const K& operator () (const pair<K, V>& data)
			{
				return data.first;
			}
		};

		typedef typename RBTree<K, pair<K, V>, MapKeyOfValue>::Iterator Iterator;
	public:
		pair<Iterator, bool> insert(const pair<K, V>& kv)
		{
			return m_t.Insert(kv);
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
		RBTree<K, pair<K, V>, MapKeyOfValue> m_t;
	};
}