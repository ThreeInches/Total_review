#include <iostream>
using namespace std;

//C++98遍历一个数组
void TestFor()
{
	int _array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < sizeof(_array) / sizeof(_array[0]); i++)
	{
		_array[i] *= 2;
	}

	for (int* p = _array; p < _array + sizeof(_array) / sizeof(_array[0]); p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

//C++11用范围for遍历
//格式：for(范围内用于迭代的变量:表示被迭代的范围)
void TestFor11()
{
	int _array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto& e : _array)
	{
		cout << e * 2 << " ";
	}
	cout << endl;
}

//范围for的使用条件
//1、for循环的范围必须确定（对于数组而言，就是数组第一个和最后一个元素的范围，对于类而言，类的begin方法和end方法是迭代的范围）
//2、迭代的对象要实现++和==

int main()
{
	TestFor();
	TestFor11();
	system("pause");
	return 0;
}
