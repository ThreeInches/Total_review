//#include <iostream>
//
//using namespace std;
//
////1、异常是通过抛出对象而引发，通过对象的类型来决定激活哪个catch
////2、被选中的处理代码是调用链中与该对象类型匹配且离抛出异常位置最近的那一个
////3、抛出异常对象后，会生成一个异常对象拷贝，因为抛出的异常对象可能是一个临时对象，所以会生成一个拷贝对象，这个拷贝的临时对象会在被catch以后销毁
////4、catch()可以捕获任意类型的异常，问题是不知道异常错误是什么
////5、实际中抛出和捕获的匹配原则有例外，并不是类型完全匹配，可以抛出的派生类对象，使用基类捕获。
//
////函数调用链中异常栈展开匹配原则
////1、首先检查throw本身是否在try块内部，如果是再查找匹配的catch语句，如果有匹配的，则调到catch的地方进行处理
////2、没有匹配的catch则退出当前函数栈，继续在调用函数的栈中进行查找匹配的catch
////3、如果到达main函数的栈，依旧没有匹配的，则终止程序
////4、找到匹配的catch子句并处理以后，会继续沿着catch子句后面继续执行
//
//double Division(int a, int b)
//{
//	//当b == 0时抛出异常
//	if (b == 0)
//	{
//		throw "Division by zero condition!";
//	}
//	else
//	{
//		return ((double)a / (double)b);
//	}
//}
//
//void Func()
//{
//	int len, time;
//	cin >> len >> time;
//	cout << Division(len, time) << endl;
//}
//
//int main()
//{
//	try
//	{
//		Func();
//	}
//	catch (const char* errmsg)
//	{
//		cout << errmsg << endl;
//	}
//	catch (...)
//	{
//		cout << "unkown exception" << endl;
//	}
//	system("pause");
//	return 0;
//}
