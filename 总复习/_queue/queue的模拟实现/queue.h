#include <iostream>
#include <deque>

using namespace std;

namespace gwp
{
	template<class T, class Con = deque<T>>
	class queue
	{
	public:
		queue()
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

		T& front()
		{
			return m_c.front();
		}

		const T& front() const
		{
			return m_c.front();
		}

		T& back()
		{
			return m_c.back();
		}

		const T& back() const
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
