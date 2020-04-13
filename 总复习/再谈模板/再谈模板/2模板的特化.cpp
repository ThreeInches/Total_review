//#include <iostream>
//
//using namespace std;
//
////模板的特化：
////模板在遇到一些特殊类型的时候会出错，就需要对模板进行特化
////模板的特化分为类模板特化和函数模板特化
//
//template<class T>
//bool isEqual(T& left, T& right)
//{
//	return (left == right) ? 1 : 0;
//}
//
//int main()
//{
//	char* p1 = "Hello";
//	char* p2 = "World";
//
//	cout << isEqual(p1, p2) << endl;
//	system("pause");
//	return 0;
//}
