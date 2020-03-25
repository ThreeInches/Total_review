#include <iostream>
using namespace std;

typedef decltype(nullptr) nullptr_t;

//注:
//1、在使用nullptr表示空值指针时，不需要包含头文件，nullptr是关键字
//2、在C++11中sizeof(nullptr)和sizeof((void*)0)所占的字节数相同
//3、为了提高代码的健壮性，使用空值指针时候，最好使用nullptr

void Fun(int)
{
	cout << "Fun(int)" << endl;
}

void Fun(int*)
{
	cout << "Fun(int*)" << endl;
}

int main()
{
	Fun(0);
	Fun(NULL);
	Fun((int*)NULL);
	system("pause");
	return 0;
}