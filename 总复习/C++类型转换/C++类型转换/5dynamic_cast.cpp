//#include <iostream>
//
//using namespace std;
//
////dynamic_cast用于将一个父类对象的指针转换为子类对象的指针或引用（动态转换）
////向上转型：子类对象指针->父类对象指针/引用（不需要转换，赋值兼容规则）
////向下转型：父类对象指针->子类对象指针/引用（用dynamic_cast转型是安全的）
////注：
////1、dynamic_cast只能用于含有虚函数的类
////2、dynamic_cast会先检查是否能转换成功，能成功转换则转换，否则返回0
////3、强制类型转换会关闭或挂起正常的类型检查。
//class A
//{
//public:
//	virtual void f()
//	{
//
//	}
//};
//
//class B : public A
//{
//
//};
//
//void fun(A* pa)
//{
//	B* pb1 = static_cast<B*>(pa);
//	B* pb2 = dynamic_cast<B*>(pa);
//
//	cout << "pb1:" << pb1 << endl;
//	cout << "pb2:" << pb2 << endl;
//}
//
//int main()
//{
//	A a;
//	B b;
//	fun(&a);
//	fun(&b);
//	system("pause");
//	return 0;
//}
