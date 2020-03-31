#include <iostream>

using namespace std;

//将类的构造函数私有，拷贝构造声明私有，防止别调用拷贝在栈上生成对象
//提供一个静态成员函数，在该静态成员函数中完成堆对象的创建

class HeapOnly
{
public:
	static HeapOnly* CreatObject()
	{
		return new HeapOnly;
	}

private:
	HeapOnly()
	{

	}

	//C++98
	//拷贝构造函数在栈上创建对象
	//HeapOnly(const HeapOnly& heaponly)
	//{

	//}

	//C++11
	HeapOnly(const HeapOnly& heaponly) = delete;
};

int main()
{

	system("pause");
	return 0;
}
