#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace gwp
{
	template<class T, class Sequence = vector<T>, class Compare = less<T>>
	class priority_queue
	{
	public:
		priority_queue()
			:m_c()
		{

		}

		template<class InputIterator>
		priority_queue(InputIterator first, InputIterator last)
			: m_c(first, last)
		{
			make_heap(m_c.begin(), m_c.end(), m_cmp);
		}

		bool empty()
		{
			return m_c.empty();
		}

		size_t size()
		{
			return m_c.size();
		}

		T& top()
		{
			return m_c.front();
		}

		const T& top() const
		{
			return m_c.front();
		}

		void push(const T& x)
		{
			m_c.push_back(x);
			push_heap(m_c.begin(), m_c.end(), m_cmp);
		}

		void pop()
		{
			pop_heap(m_c.begin(), m_c.end(), m_cmp);
			m_c.pop_back();
		}


	private:
		Sequence m_c;
		Compare m_cmp;
	};
}