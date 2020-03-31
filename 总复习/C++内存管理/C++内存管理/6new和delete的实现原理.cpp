#include <iostream>

using namespace std;

//内置类型
//申请内置类型的空间，new和malloc，realloc， calloc基本类似，delete和free基本类似
//new/delete申请和释放的是单个空间，new[]和delete[]申请和释放的是连续空间
//new申请空间失败时会抛出异常，而malloc是返回NULL

//自定义类型
//new原理
//1、调用operator new申请空间
//2、在申请的空间上执行构造函数，完成对象的构造
//delete原理
//1、在空间上执行析构函数，完成对象中资源的清理工作
//2、调用operator delete函数释放对象的空间
//new[]原理
//1、调用operator new[]函数，在operator new[]中实际调用operator new函数完成N个对象空间的申请
//2、在申请的空间上进行N次构造函数
//delete[]原理
//1、在释放对象空间上执行N次析构函数，完成N个对象中资源的清理
//2、调用operator delete[]函数释放资源，实际在operator delete[]中调用operator delete来释放空间

int main()
{

	system("pause");
	return 0;
}
