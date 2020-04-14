//#include <iostream>
//
//using namespace std;
//
////类模板的偏特化是指任何模板参数进一步进行条件限制的特化版本
//
////类模板的偏特化分为两种
////一种是部分特化：将模板参数的一部分特化
////另外一种是参数的进一步限制：偏特化也可以是将模板参数进行更进一步的限制，而设计出的模板
//
//template<class T1, class T2>
//class Data
//{
//public:
//	Data()
//	{
//		cout << "Data()<T1, T2>" << endl;
//	}
//private:
//	T1 m_d1;
//	T2 m_d2;
//};
//
//template<class T2>
//class Data<int, T2>
//{
//public:
//	Data()
//	{
//		cout << "Data()<int, T2>" << endl;
//	}
//private:
//	int m_d1;
//	T2 m_d2;
//};
//
//template<class T1>
//class Data<T1, char>
//{
//public:
//	Data()
//	{
//		cout << "Data()<T1, char>" << endl;
//	}
//private:
//	T1 m_d1;
//	char m_d2;
//};
//
//template<class T1, class T2>
//class Data<T1*, T2*>
//{
//public:
//	Data()
//	{
//		cout << "Data()<T1*, T2*>" << endl;
//	}
//private:
//	T1* m_d1;
//	T2* m_d2;
//};
//
//template<class T1, class T2>
//class Data<T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		:m_d1(d1)
//		, m_d2(d2)
//	{
//		cout << "Data(T1&, T2&)" << endl;
//	}
//private:
//	const T1& m_d1;
//	const T2& m_d2;
//};
//
//int main()
//{
//	Data<double, int> d1; // 调用特化的int版本
//	Data<int, double> d2; // 调用基础的模板
//	Data<int *, int*> d3; // 调用特化的指针版本
//	Data<int&, int&> d4(1, 2); // 调用特化的指针版本
//
//	system("pause");
//	return 0;
//}
