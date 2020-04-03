//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <cassert>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		if (str == nullptr)
//		{
//			str = "";
//		}
//
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//
//	String(const String& s)
//		:_str(nullptr)
//	{
//		String tmp(s._str);
//		strcpy(_str, tmp._str);
//	}
//
//	String& operator=(String& s)
//	{
//		swap(_str, s._str);
//
//		return *this;
//	}
//
//	~String()
//	{
//		if (_str)
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}
