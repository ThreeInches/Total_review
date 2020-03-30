//#include <iostream>
//
//using namespace std;
//
////定位new表达式是在已分配的原始内存空间中调用构造函数初始化一个对象
////使用格式：
////new(place_address)type或者new(place_address)type(initializer-list)
////place_address必须是一个指针，initializer-list是类型的初始化列表
//
////使用场景：
////定位new表达式在实际中一般是配合内存池使用，因为内存池分配出的内存没有初始化
////若是自定义类型的对象，需要使用new的定位表达式进行显示调用构造函数进行初始化
//
//class Test
//{
//public:
//	Test(int data)
//		:_data(data)
//	{
//		cout << "Test()" << endl;
//	}
//
//	~Test()
//	{
//		cout << "~Test()" << endl;
//	}
//
//private:
//	int _data;
//};
//
//void Test1()
//{
//	//ptr目前只是与Test相同大小的一块空间，还不能算是一个对象，因为构造函数没有执行
//	Test* ptr = (Test*)malloc(sizeof(Test));
//	//若是Test类的构造函数有参数，此处需要传参
//	new(ptr) Test(10);
//}
//
//int main()
//{
//	Test1();
//	system("pause");
//	return 0;
//}
