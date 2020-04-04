#include <iostream>
#include <string>

using namespace std;

void TestString1()
{
	string s1;//构造空的string类对象s1
	string s2("Hello, World!");//c格式构造string类类型s2
	string s3(s2);//拷贝构造s3
	string s4(10, 'a');//构造10个字符'a'字符

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

int main()
{
	TestString1();
	system("pause");
	return 0;
}
