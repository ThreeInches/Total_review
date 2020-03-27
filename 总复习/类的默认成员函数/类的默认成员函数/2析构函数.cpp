//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <cassert>
//#include <cstring>
//
//using namespace std;
//
////析构函数是对象在销毁时候回自动调用析构函数，完成一些资源的释放工作。
////析构函数的特征
////1、析构函数名是在类名称前面加上~
////2、无参数无返回值
////3、一个类有且只有一个析构函数，若未现实定义，有编译器给出默认析构函数
////4、对象生命周期结束时，C++编译器自动调用析构函数。
//
//typedef int DataType;
//
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		_SeqList = (DataType*)malloc(capacity * sizeof(DataType));
//		assert(_SeqList);
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	~SeqList()
//	{
//		if (_SeqList)
//		{
//			free(_SeqList);
//			_SeqList = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _SeqList;
//	size_t _size;
//	size_t _capacity;
//};
//
//class String
//{
//public:
//	String(const char* str = "zhangsan")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//		_str = NULL;
//	}
//
//private:
//	char* _str;
//};
//
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//
//int main()
//{
//	String _name;
//	Person per;
//
//	system("pause");
//	return 0;
//}
