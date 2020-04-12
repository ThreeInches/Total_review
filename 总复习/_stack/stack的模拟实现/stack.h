#include <iostream>
#include <deque>

using namespace std;

namespace gwp
{
	template<class T, class Con = deque<T>>
	class stack
	{
	public:
		stack()
		{

		}

		void push(const T& x)
		{
			m_c.push_back(x);
		}

		void pop()
		{
			m_c.pop_back();
		}

		T& top()
		{
			return m_c.back();
		}

		const T& top() const
		{
			return m_c.back();
		}

		size_t size()
		{
			return m_c.size();
		}

		bool empty()
		{
			return m_c.empty();
		}
		
	private:
		Con m_c;
	};
}
