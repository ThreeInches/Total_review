#include <iostream>

using namespace std;

//new和delete操作自定义类型
class Test
{
public:
	Test()
		:_data(0)
	{
		cout << "Test()" << endl;
	}

	~Test()
	{
		cout << "~Test()" << endl;
	}
private:
	int _data;
};

void Test1()
{
	Test *p1 = (Test*)malloc(sizeof(Test));
	free(p1);

	Test *p2 = (Test*)malloc(sizeof(Test)* 10);
	free(p2);
}

void Test2()
{
	Test *p3 = new Test;
	delete p3;

	Test *p4 = new Test[10];
	delete[] p4;
}
//在申请自定义类似空间的时候，new会调用构造函数，delete会调用析构函数，而malloc和free不会调用
int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}
