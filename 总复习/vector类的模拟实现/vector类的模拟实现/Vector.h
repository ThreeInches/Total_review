#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

namespace gwp
{


template <class T>
class vector
{
public:
	typedef T* iterator;
	typedef const T* const_iterator;

	iterator begin()
	{
		return m_start;
	}

	iterator end()
	{
		return m_finish;
	}

	const_iterator cbegin()
	{
		return m_start;
	}

	const_iterator cend()
	{
		return m_finish;
	}

	iterator rbegin()
	{
		return m_finish;
	}

	iterator rend()
	{
		return m_start£»
	}

	const_iterator rcbegin()
	{
		return m_finish;
	}

	const_iterator rcend()
	{
		return m_start;
	}

	vector()
		:m_start(nullptr)
		, m_finish(nullptr)
		£¬ m_endOfStorage(nullptr)
	{

	}

	vector(int n, const T& value = T())
		:m_start(nullptr)
		, m_finish(nullptr)
		, m_endOfStorage(nullptr)
	{
		reserve(n);
		while (n--)
		{
			push_back(value);
		}
	}

	template <class InputIterator>
	vector(InputIterator first, InputIterator last)
	{
		reserve(last - first);

		while (first != last)
		{
			push_back(*first);
			first++;
		}
	}

	vector(const vector<T>& v)
		:m_start(nullptr)
		, m_finish(nullptr)
		, m_endOfStorage(nullptr)
	{
		reserve(v.capacity());
		
		iterator it = begin();
		const_iterator vit = v.cbegin();

		while (vit != v.end())
		{
			*it++ = *vit++;
		}

		m_finish = m_start + v.size();
		m_endOfStorage = m_start + v.capacity();
	}

	vector<T>& operator = (const vector<T>& v)
	{
		swap(v);
		return *this;
	}

	~vector()
	{
		delete[] m_start;
		m_start = nullptr;
		m_finish = nullptr;
		m_endOfStorage = nullptr;
	}

	T& operator [] (int i)
	{
		return m_start[i];
	}

	const T& operator [] (int i) const
	{
		return m_start[i];
	}

	size_t size() const
	{
		return m_finish - m_start;
	}

	size_t capacity() const
	{
		return m_endOfStorage - m_start;
	}

	void reserve(size_t _size)
	{
		int _capacity = capacity();

		if (_size > _capacity)
		{
			if (_capacity == 0)
			{
				_capacity = 1;
			}
			while (_capacity < _size)
			{
				_capacity *= 2;
			}

			T* tmp = new T[_capacity];
			m_endOfStorage = tmp + _capacity;
			int OldSize = size();
			m_finish = tmp + OldSize;
			if (m_start != nullptr)
			{
				for (int i = 0; i < OldSize; i++)
				{
					tmp[i] = m_start[i];
				}
				delete[] m_start;
			}
			m_start = tmp;
		}
	}

	void resize(size_t _size, const T& value = T())
	{
		reserve(_size);

		for (int i = size(); i < _size; i++)
		{
			m_start[i] = value;
		}

		m_finish = m_start + _size;
	}

	iterator insert(iterator pos, const T &value)
	{
		int tmp = pos - m_start;
		reserve(size() + 1);
		pos = m_start + tmp;

		for (int i = size() - 1; i > pos - m_start; i--)
		{
			m_start[i + 1] = m_start[i];
		}

		pos[0] = value;

		m_finish++;

		return pos;
	}

	iterator insert(iterator pos, int n, const T &value)
	{
		int tmp = pos - m_start;
		reserve(size() + n);
		pos = m_start + tmp;

		for (int i = size() - 1; i > pos - m_start; i--)
		{
			m_start[i + n] = m_start[i];
		}

		for (int i = 0; i < n; i++)
		{
			pos[i] = value;
		}

		m_finish += n;

		return pos;
	}
	iterator insert(iterator pos, const T * start, const T * end)
	{
		int tmp = pos - m_start;
		int externsize = end - start;
		reserve(size() + externsize);
		pos = m_start + tmp;

		for (int i = size() - 1; i > pos - m_start; i--)
		{
			m_start[i + externsize] = m_start[i];
		}

		for (int i = 0; i < externsize; i++)
		{
			pos[i] = start[i];
		}

		m_finish += externsize;

		return pos;
	}

	iterator erase(iterator pos)
	{
		for (int i = pos - m_start; i < size() - 1; i++)
		{
			m_start[i] = m_start[i + 1];
		}

		m_finish--;

		return pos;
	}

	iterator erase(iterator start, iterator end)
	{
		int externsize = end - start;

		for (int i = start - m_start; i < size() - externsize; i++)
		{
			m_start[i] = m_start[i + externsize];
		}

		m_finish -= externsize;

		return start;
	}


	void push_back(const T& value)
	{
		reserve(size() + 1);
		*m_finish = value;
		m_finish++;
	}

	void pop_back()
	{
		m_finish--;
	}

private:
	iterator m_start;
	iterator m_finish;
	iterator m_endOfStorage;
};

};