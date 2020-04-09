#include <iostream>

using namespace std;

namespace gwp
{
	template <class T>
	class ListNode
	{
	public:
		ListNode(const T& val = T())
			:m_prev(nullptr)
			, m_next(nullptr)
			, m_val(val)
		{

		}

	public:
		ListNode<T>* m_prev;
		ListNode<T>* m_next;
		T m_val;
	};
	template <class T>
	class list
	{
	public:
		class iterator
		{
		public:
			iterator(ListNode<T>* val = nullptr)
				:m_pNode(val)
			{

			}

			iterator(const iterator& l)
				:m_pNode(l.m_pNode)
			{

			}

			T& operator * ()
			{
				return m_pNode->m_val;
			}

			T& operator -> ()
			{
				return &m_pNode->m_val;
			}

			iterator operator ++ ()
			{
				m_pNode = m_pNode->m_next;
				return *this;
			}

			iterator operator ++ (int)
			{
				iterator tmp = *this;
				m_pNode = m_pNode->m_next;
				return tmp;
			}

			iterator operator -- ()
			{
				m_pNode = m_pNode->m_prev;
				return *this;
			}

			iterator operator -- (int)
			{
				iterator tmp = *this;
				m_pNode = m_pNode->m_prev;
				return tmp;
			}

			bool operator != (const iterator& l)
			{
				return m_pNode != l.m_pNode;
			}

			bool operator == (const iterator& l)
			{
				return m_pNode == l.m_pNode;
			}

		public:
			ListNode<T>* m_pNode;
		};

		void createHead()
		{
			m_head = new ListNode<T>;
			m_head->m_prev = m_head;
			m_head->m_next = m_head;
		}

		list()
		{
			createHead();
		}

		list(int n, const T& val = T())
		{
			createHead();
			
			for (int i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		list(iterator start, iterator end)
		{
			createHead();

			insert(end(), start, end);
		}

		list(T* start, T* finish)
		{
			createHead();
			
			insert(end(), start, finish);
		}

		list(list<T>& l)
		{
			createHead();

			insert(end(), l.begin(), l.end());
		}

		list<T>& operator = (list<T>& l)
		{
			if (this != &l)
			{
				clear();
				iterator it = l.begin();
				while (it != l.end())
				{
					push_back(*it);
					it++;
				}
			}
			return *this;
		}

		~list()
		{
			erase(begin(), end());
			delete m_head;
		}

		void clear()
		{
			erase(begin(), end());
		}

		void push_back(const T& val)
		{
			insert(end(), val);
		}

		void push_front(const T& val)
		{
			insert(begin(), val);
		}

		void pop_back()
		{
			erase(--end());
		}

		void pop_front()
		{
			erase(begin());
		}

		iterator insert(iterator pos, const T& val)
		{
			ListNode<T>* cur = new ListNode<T>;
			ListNode<T>* npos = pos.m_pNode;

			cur->m_val = val;

			cur->m_prev = npos->m_prev;
			cur->m_prev->m_next = cur;

			cur->m_next = npos;
			npos->m_prev = cur;

			return cur;
		}

		iterator insert(iterator pos, iterator start, iterator end)
		{
			iterator tmpit = --pos;
			pos++;

			for (iterator it = start; it != end; it++)
			{
				insert(pos, *it);
			}

			return ++tmpit;
		}

		iterator insert(iterator pos, T* start, T* finish)
		{
			iterator tmpit = --pos;
			pos++;

			for (T* it = start; it != finish; it++)
			{
				insert(pos, *it);
			}

			return ++tmpit;
		}

		iterator erase(iterator pos)
		{
			ListNode<T>* npos = pos.m_pNode;
			ListNode<T>* cur = npos->m_next;

			npos->m_next->m_prev = npos->m_prev;
			npos->m_prev->m_next = npos->m_next;
			delete npos;

			return cur;
		}

		iterator erase(iterator start, iterator finish)
		{
			iterator it = start;

			while (it != finish)
			{
				it = erase(it);
			}

			return finish;
		}

		iterator begin()
		{
			return m_head->m_next;
		}

		iterator end()
		{
			return m_head;
		}

		size_t size() const
		{
			int count = 0;

			ListNode<T>* cur = m_head->m_next;
			while (cur != m_head)
			{
				count++;
				cur = cur->m_next;
			}

			return count;
		}

		bool empty() const
		{
			return size() ? false : true;
		}

		T& front()
		{
			return m_head->m_next->m_val;
		}

		const T& front() const
		{
			return m_head->m_next->m_val;
		}

		T& back()
		{
			return m_head->m_prev->m_val;
		}

		const T& back() const
		{
			return m_head->m_prev->m_val;
		}

		void swap(list<T>& l)
		{
			swap(m_head, l.m_head);
		}

		void PrintList()
		{
			for (auto i = begin(); i != end(); i++)
			{
				cout << *i << ' ';
			}
			cout << endl;
		}



	public:
		ListNode<T>* m_head;
	};
}