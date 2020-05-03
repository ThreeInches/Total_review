#include <iostream>

using namespace std;

//键值对：用来表示具有一一对应关系的结构，该结构一般包含两个成员变量key和value，key代表键，value代表值，value表示与key对应的信息

template<class T1, class T2>
class pair
{
public:
	typedef T1 fist_type;
	typedef T2 second_type;
	pair()
		:first(T1())
		, second(T2())
	{

	}

	pair(const T1& a, const T2& b)
		:first(a)
		, second(b)
	{

	}
public:
	T1 first;
	T2 second;
};

int main()
{

	system("pause");
	return 0;
}
