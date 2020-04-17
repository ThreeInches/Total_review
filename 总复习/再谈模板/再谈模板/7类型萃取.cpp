#include <iostream>

using namespace std;

//代表内置类型
class TrueType
{
public:
	static bool Get()
	{
		return true;
	}
};

//代表自定义类型
class FalseType
{
public:
	static bool Get()
	{
		return false;
	}
};

template<class T>
class TypeTraits
{
public:
	typedef FalseType IsPODType;
};

template<>
class TypeTraits<char>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<short>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<int>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<long>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<long long>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<float>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<double>
{
public:
	typedef TrueType IsPODType;
};

template<>
class TypeTraits<long double>
{
public:
	typedef TrueType IsPODType;
};

template<class T>
void _copy(T* dst, T* src, size_t size)
{
	if (TypeTraits<T>::IsPODType::Get())
	{
		memcpy(dst, src, sizeof(T) * size);
	}
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			dst[i] = src[i];
		}
	}
}

int main()
{
	int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int a2[10];

	_copy(a2, a1, 10);

	string s1[] = { "111", "222", "333", "444" };
	string s2[4];
	_copy(s2, s1, 4);
	system("pause");
	return 0;
}
