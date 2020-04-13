//#include <iostream>
//
//using namespace std;
//
////全特化是将模板参数列表中所有的参数都特化
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
//template<>
//class Data<int, char>
//{
//public:
//	Data()
//	{
//		cout << "Data()<int, char>" << endl;
//	}
//private:
//	int m_d1;
//	char m_d2;
//};
//
//int main()
//{
//	Data<int, int> data1;
//	Data<int, char> data2;
//	system("pause");
//	return 0;
//}
