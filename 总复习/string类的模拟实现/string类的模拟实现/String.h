#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <algorithm>

#define CAPACITY 16

using namespace std;

class String
{
public:
	typedef char* iterator;
public:
	String(const char* str = "")
	{
		if (str == nullptr)
		{
			m_str = "";
		}

		m_size = strlen(str);
		m_capacity = m_size;
		m_str = new char[m_capacity + 1];
		strcpy(m_str, str);
	}

	String(String& s)
		:m_str(nullptr)
		, m_size(0)
		, m_capacity(0)
	{
		String tmp(s);
		swap(*this, s);
	}

	String& operator=(String& s)
	{
		swap(*this, s);

		return *this;
	}

	~String()
	{
		if (m_str)
		{
			delete[] m_str;
			m_str = nullptr;
		}

		m_size = 0;
		m_capacity = 0;
	}

	//iterator
	iterator begin()
	{
		return m_str;
	}

	iterator end()
	{
		return m_str + m_size;
	}

	size_t Size()
	{
		return m_size;
	}

	size_t Length()
	{
		return m_size;
	}

	size_t Capacity()
	{
		return m_capacity;
	}

	bool Empty()
	{
		if (m_size == 0)
		{
			return true;
		}
		return false;
	}

	void Clear()
	{
		m_size = 0;
	}

	//modify
	size_t CountCapacity(size_t size)
	{
		return (((size) / CAPACITY + 1) * CAPACITY);
	}

	void Reserve(size_t capacity)
	{
		if (m_size == m_capacity)
		{
			m_capacity = CountCapacity(m_size);
			m_str = (char*)realloc(m_str, m_capacity);
		}
	}

	void Resize(size_t size, char c = '\0')
	{
		Reserve(size);

		if (m_size < size)
		{
			memset(m_str + m_size, c, size - m_size);
		}
		m_size = size;
	}

	void Reverse(size_t begin, size_t end)
	{
		while (begin < end)
		{
			swap(m_str[begin], m_str[end]);
			begin++;
			end--;
		}
	}

	char& operator[](int i)
	{
		return m_str[i];
	}

	void PushBack(char c)
	{
		Reserve(m_size);
		m_str[m_size] = c;
		m_size++;
	}

	void PopBack()
	{
		if (!Empty())
		{
			m_size--;
		}
	}

	String& operator+=(const char str)
	{
		size_t tmp = m_size;
		m_size += strlen(&str);
		Reserve(m_size);
		strcpy(m_str + tmp, &str);
		return *this;
	}

	String& operator+=(const String& s)
	{
		size_t tmp = m_size;
		m_size += s.m_size;
		Reserve(m_size);
		strcpy(m_str + tmp, s.m_str);
		return *this;
	}

	String& Append(const char str, size_t n)
	{
		size_t tmp = m_size;
		m_size += n;
		Reserve(m_size);
		strncpy(m_str + tmp, &str, n);
		return *this;
	}

	String& Append(const String& s)
	{
		size_t tmp = m_size;
		m_size += s.m_size;
		Reserve(m_size);
		strcpy(m_str + tmp, s.m_str);
		return *this;
	}

	const char* C_STR()
	{
		return m_str;
	}

	size_t find(char ch, int pos = 0) const
	{
		if (pos <= 0 || pos >= m_size)
		{
			return -1;
		}

		char* tmp = strchr(m_str + pos, ch);

		if (tmp)
		{
			return tmp - m_str;
		}

		return -1;
	}

	size_t find(const char str, int pos, int n)
	{
		if (pos <= 0 || pos >= n)
		{
			return -1;
		}

		char* tmp = strstr(m_str + pos, &str);

		if (tmp)
		{
			return tmp - m_str;
		}

		return -1;
	}

	size_t find(const String& str, int pos = 0)
	{
		if (pos <= 0 || pos >= m_size)
		{
			return -1;
		}

		char* tmp = strstr(m_str + pos, str.m_str);

		if (tmp)
		{
			return tmp - m_str;
		}

		return -1;
	}

	size_t rfind(char ch, int pos = 0)
	{
		if (pos <= 0 || pos >= m_size)
		{
			return -1;
		}

		Reverse(0, m_size - 1);
		char* tmp = strchr(m_str + pos, ch);

		if (tmp)
		{
			return tmp - m_str;
		}

		return -1;
	}

	size_t rfind(const char str, int pos, int n)
	{
		if (pos <= 0 || pos >= n)
		{
			return -1;
		}

		Reverse(0, m_size - 1);
		char* tmp = strstr(m_str + pos, &str);

		if (tmp)
		{
			return tmp - m_str;
		}

		return -1;
	}

	size_t rfind(const String& s, int pos = 0)
	{
		if (pos <= 0 || pos >= m_size)
		{
			return -1;
		}

		Reverse(0, m_size - 1);
		char* tmp = strstr(m_str + pos, s.m_str);

		if (tmp)
		{
			return tmp - m_str;
		}

		return -1;
	}

	String Substr(size_t start, size_t num)
	{
		String tmp;
		tmp.Resize(num + 1);
		strncpy(tmp.m_str, m_str + start, num);
		return tmp;
	}

	String operator+(const char* str) const;
	String operator+(const String& s) const;
	friend String operator+(const char* str, const String& s);

	bool operator>(const char* str) const;
	bool operator>=(const char* str) const;
	bool operator<(const char* str) const;
	bool operator<=(const char* str) const;
	bool operator==(const char* str) const;
	bool operator!=(const char* str) const;

	bool operator>(const String& s) const;
	bool operator>=(const String& s) const;
	bool operator<(const String& s) const;
	bool operator<=(const String& s) const;
	bool operator==(const String& s) const;
	bool operator!=(const String& s) const;

	friend bool operator>(const char* str, const String& s);
	friend bool operator>=(const char* str, const String& s);
	friend bool operator<(const char* str, const String& s);
	friend bool operator<=(const char* str, const String& s);
	friend bool operator==(const char* str, const String& s);
	friend bool operator!=(const char* str, const String& s);

	friend ostream& operator<<(ostream& _cout, const String& s);
	friend istream& operator>>(istream& _cin, String& s);

private:
	char* m_str;
	size_t m_size;
	size_t m_capacity;
};

String String::operator+(const char* str) const
{
	String res;

	res.m_size = m_size + strlen(str);
	res.Reserve(res.m_size);

	strncpy(res.m_str, m_str, m_size);
	strcpy(res.m_str + m_size, str);
	
	return res;
}

String String::operator+(const String& s) const
{
	String res;

	res.m_size = m_size + s.m_size;
	res.Reserve(res.m_size);

	strncpy(res.m_str, m_str, m_size);
	strncpy(res.m_str + m_size, s.m_str, s.m_size);

	return res;
}

String operator+(const char* str, const String& s)
{
	String res;

	res.m_size = strlen(str) + s.m_size;
	res.Reserve(res.m_size);

	strcpy(res.m_str, str);
	strncat(res.m_str, s.m_str, s.m_size);

	return res;
}

bool String::operator>(const char* str) const
{
	int tmp = strncmp(m_str, str, m_size);

	if (!tmp && strlen(str) < m_size)
	{
		return true;
	}

	return tmp > 0;
}
bool String::operator>=(const char* str) const
{
	return !(*this < str);
}
bool String::operator<(const char* str) const
{
	int tmp = strncmp(m_str, str, m_size);

	if (!tmp && strlen(str) > m_size)
	{
		return true;
	}

	return tmp < 0;
}

bool String::operator<=(const char* str) const
{
	return !(*this > str);
}

bool String::operator==(const char* str) const
{
	int tmp = strncmp(m_str, str, m_size);

	if (!tmp && strlen(str) == m_size)
	{
		return true;
	}

	return false;
}
bool String::operator!=(const char* str) const
{
	return !(*this == str);
}

bool String::operator>(const String& s) const
{
	int minSize = min(m_size, s.m_size);

	for (int i = 0; i < minSize; i++)
	{
		if (m_str[i] > s.m_str[i])
		{
			return true;
		}
		else if (m_str[i] < s.m_str[i])
		{
			return false;
		}
	}

	return m_size > s.m_size;
}

bool String::operator>=(const String& s) const
{
	return !(*this < s);
}

bool String::operator<(const String& s) const
{
	int minSize = min(m_size, s.m_size);

	for (int i = 0; i < minSize; i++)
	{
		if (m_str[i] < s.m_str[i])
		{
			return true;
		}
		else if(m_str[i] > s.m_str[i])
		{
			return false;
		}
	}

	return m_size > s.m_size;
}

bool String::operator<=(const String& s) const
{
	return !(*this > s);
}

bool String::operator==(const String& s) const
{
	int minSize = min(m_size, s.m_size);

	for (int i = 0; i < minSize; i++)
	{
		if (m_str[i] != s.m_str[i])
		{
			return false;
		}
	}

	return m_size == s.m_size;
}

bool String::operator!=(const String& s) const
{
	return !(*this == s);
}

bool operator>(const char* str, const String& s)
{
	return strncmp(str, s.m_str, s.m_size) > 0;
}

bool operator>=(const char* str, const String& s)
{
	return !(str < s);
}

bool operator<(const char* str, const String& s)
{
	return strncmp(str, s.m_str, s.m_size) < 0;
}

bool operator<=(const char* str, const String& s)
{
	return !(str > s);
}

bool operator==(const char* str, const String& s)
{
	return strncmp(str, s.m_str, s.m_size) == 0;
}

bool operator!=(const char* str, const String& s)
{
	return !(str == s);
}

ostream& operator<<(ostream& _cout, const String& s)
{
	for (int i = 0; i < s.m_size; i++)
	{
		_cout << s.m_str[i];
	}

	return _cout;
}

istream& operator>>(istream& _cin, String& s)
{
	char* tmp = new char[1024];
	_cin.getline(tmp, 1024);

	s.m_size = strlen(tmp);
	s.m_capacity = (((s.m_size) / CAPACITY + 1) * CAPACITY);
	strcpy(s.m_str, tmp);

	delete[] tmp;

	return _cin;
}