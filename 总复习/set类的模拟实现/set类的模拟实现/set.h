#pragma once
#include "RBTree.h"

namespace gwp
{
	template<class K>
	class set
	{
	public:
		void insert(const K& data)
		{
			m_t.Insert(data);
		}
	private:
		class SetKeyOfValue
		{
		public:
			const K& operator () (const K& data)
			{
				return data;
			}
		};

		RBTree<K, K, SetKeyOfValue> m_t;
	};
}