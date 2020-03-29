//#include <iostream>
//
//using namespace std;
//
////C++11支持非静态成员变量在声明时进行初始化赋值，但是要注意这里不是初始化，这里是给声明的成员变量缺省值。
//
//class B
//{
//public:
//	B(int b = 0)
//		:_b(b)
//	{
//
//	}
//private:
//	int _b;
//
//};
//
//class A
//{
//public:
//
//private:
//	//非静态成员变量，可以在成员声明时给缺省值。
//	int a = 10;
//	B b = 20;
//	int* p = (int*)malloc(4);
//	static int n;
//};
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}
