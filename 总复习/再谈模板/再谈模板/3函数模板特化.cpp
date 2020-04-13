//#include <iostream>
//
//using namespace std;
//
////函数模板特化的步骤
////1、必须先有一个函数模板
////2、template<> 函数返回值 需要特化的函数名<需要特化的类型>(参数列表)
////3、函数的形参列表必须和需要特化的类型一致
//
//template<class T>
//bool isEqual(T& left, T& right)
//{
//	return (left == right) ? true : false;
//}
//
//template<>
//bool isEqual<char*>(char*& left, char*& right)
//{
//	return (strcmp(left, right) == 0) ? true : false;
//}
//
//int main()
//{
//	char* p1 = "Hello";
//	char* p2 = "World";
//	char* p3 = "World";
//
//	cout << isEqual(p1, p2) << endl;
//	cout << isEqual(p2, p3) << endl;
//	system("pause");
//	return 0;
//}
