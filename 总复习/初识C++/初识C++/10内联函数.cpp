//#include <iostream>
//using namespace std;
//
//1、inline是空间换时间的做法，省去调用函数的开销；
//2、inline对编译器是一种建议，编译器自动优化，如果inline函数体内有循环/递归等，编译器忽略优化；
//3、inline不能将声明和定义分离，否则链接会出错，inline被展开的时候函数地址就会消失，链接出错。
//
//inline int Add(int a, int b)
//{
//	return a + b;
//}
//看
//int main()
//{
//	int res = 0;
//	res = Add(10, 20);
//	cout << res << endl;
//	system("pause");
//	return 0;
//}
