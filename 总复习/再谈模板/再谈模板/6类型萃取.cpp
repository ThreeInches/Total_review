#include <iostream>
#include <cstring>
#include <string>
#include <typeinfo>

using namespace std;

//类模板特化的应用：类型萃取

//使用memcpy进行拷贝（浅拷贝，对自定义类型无效）
template <class T>
void _copy1(T* dst, T* src, size_t size)
{
	memcpy(dst, src, sizeof(T*)*size);
}

//使用赋值方式拷贝（效率较低）
template<class T>
void _copy2(T* dst, T* src, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		dst[i] = src[i];
	}
}

//增加bool类型区分自定义类型和内置类型
template<class T>
void _copy3(T* dst, T* src, size_t size, bool IsPODType)
{
	if (IsPODType)
	{
		memcpy(dst, src, sizeof(T*)*size);
	}
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			dst[i] = src[i];
		}
	}
}

//使用函数区分内置类型和自定义类型
bool IsPODType(const char* strType)
{
	const char* arrType[] = { "char", "short", "int", "long", "long long", "float", "double", "long double" };
	for (size_t i = 0; i < sizeof(arrType) / sizeof(arrType[0]); i++)
	{
		if (!strcmp(strType, arrType[i]))
		{
			return true;
		}
	}
	return false;
}

template<class T>
void _copy4(T* dst, T* src, size_t size)
{
	if (IsPODType(typeid(T).name()))
	{
		memcpy(dst, src, sizeof(T*)*size);
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
	string s1[3] = { "11", "22", "33" };
	string s2[3];

	_copy1(s2, s1, 3);
	_copy2(s2, s1, 3);
	_copy3(s2, s1, 3, true);
	_copy3(s2, s1, 3, false);
	_copy4(s2, s1, 3);
	system("pause");
	return 0;
}