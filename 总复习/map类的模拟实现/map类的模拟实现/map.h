#pragma once
#include "RBTree.h"

namespace gwp
{
	template<class K, class V>
	class map
	{
	public:
		void insert(const pair<K, V>& kv)
		{
			m_t.Insert(kv);
		}
	private:
		class MapKeyOfValue
		{
		public:
			const K& operator () (const pair<K, V>& data)
			{
				return data.first;
			}
		};

		RBTree<K, pair<K, V>, MapKeyOfValue> m_t;
	};
}