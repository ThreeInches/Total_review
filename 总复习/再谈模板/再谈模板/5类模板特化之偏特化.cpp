#include <iostream>

using namespace std;

//类模板的偏特化是指任何模板参数进一步进行条件限制的特化版本

//类模板的偏特化分为两种
//一种是部分特化：将模板参数的一部分特化
//另外一种是参数的进一步限制：偏特化也可以是将模板参数进行更进一步的限制，而设计出的模板

template<class t1, class t2>
class data
{
public:
	data()
	{
		cout << "data()<t1, t2>" << endl;
	}
private:
	t1 m_d1;
	t2 m_d2;
};

template<class t2>
class data<int, t2>
{
public:
	data()
	{
		cout << "data()<int, t2>" << endl;
	}
private:
	int m_d1;
	t2 m_d2;
};

template<class t1>
class data<t1, char>
{
public:
	data()
	{
		cout << "data()<t1, char>" << endl;
	}
private:
	t1 m_d1;
	char m_d2;
};

template<class t1, class t2>
class data<t1*, t2*>
{
public:
	data()
	{
		cout << "data()<t1*, t2*>" << endl;
	}
private:
	t1* m_d1;
	t2* m_d2;
};

template<class t1, class t2>
class data<t1&, t2&>
{
public:
	data(const t1& d1, const t2& d2)
		:m_d1(d1)
		, m_d2(d2)
	{
		cout << "data(t1&, t2&)" << endl;
	}
private:
	const t1& m_d1;
	const t2& m_d2;
};

int main()
{
	data<double, int> d1; // 调用特化的int版本
	data<int, double> d2; // 调用基础的模板
	data<int *, int*> d3; // 调用特化的指针版本
	data<int&, int&> d4(1, 2); // 调用特化的指针版本

	system("pause");
	return 0;
}
