//#include <iostream>
//
//using namespace std;
//
////explicit关键字是阻止经过转换构造函数进行隐式转换的发生
//
//class A
//{
//public:
//	explicit A(int a)
//	{
//		cout << "A(int a)" << endl;
//	}
//
//	A(const A& a)
//	{
//		cout << "A(const A& a)" << endl;
//	}
//private:
//	int m_a;
//};
//
//int main()
//{
//	A a1(1);
//	A a2 = 1;
//	system("pause");
//	return 0;
//}
