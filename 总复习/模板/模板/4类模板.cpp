#include <iostream>

using namespace std;

//类模板代表一个类家族，该类模板与类型无关，在使用时被参数化，根据实参类型产生类的特定类型版本

//类模板的格式：
//template<class T1, class T2, …, class Tn>
//class 类模板名
//{
//	类体
//}

template<class T>
class Vector
{
public:
	Vector(size_t capacity)
		:_pData(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{

	}

	~Vector();

	void PushBack()
	{
		_pData[_size] = x;
		_size++;
	}

	size_t Size()
	{
		return _size;
	}

	T& operator[](size_t pos)
	{
		if (pos < _size)
		{
			return _pData[pos];
		}
	}

private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};

//注：在类模板外面进行定义时要加模板参数列表
template<class T>
Vector<T>::~Vector()
{
	if (_pData)
	{
		delete[] _pData;
	}
	_size = 0;
	_capacity = 0;
}

//类模板实例化需要在类模板名字后面加<>，然后将实例化的类型放在<>中即可。
//注：实例化的结果才是真正的类
int main()
{
	Vector<int> s1(10);
	Vector<double> s2(20);
	system("pause");
	return 0;
}
