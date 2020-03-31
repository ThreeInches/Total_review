#include <iostream>

using namespace std;

//在堆和栈上创建对象都会调用构造函数，因此，先将构造函数私有化
//创建一个static函数完成栈对象的创建

class StackOnly
{
public:
	static StackOnly CreatObject()
	{
		return StackOnly();
	}

private:
	StackOnly()
	{

	}

};

//方法二屏蔽掉new和new定位表达式
class StackOnly
{
public:
	StackOnly()
	{

	}
private:
	void* operator new(size_t size);
	void operator delete(void* p);
};

int main()
{

	system("pause");
	return 0;
}
