#include <iostream>

using namespace std;

class Base
{
public:
	virtual void func1()
	{
		cout << "Base::func1()" << endl;
	}

	virtual void func2()
	{
		cout << "Base::func2()" << endl;
	}
private:
	int m_a;
};

class Derive : public Base
{
public:
	virtual void func1()
	{
		cout << "Derive::func1()" << endl;
	}

	virtual void func3()
	{
		cout << "Derive::func3()" << endl;
	}

	virtual void func4()
	{
		cout << "Derive::func4()" << endl;
	}
private: 
	int m_b;
};

typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{
	cout << "序表地址" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; i++)
	{
		printf("第%d个虚函数地址：0X%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}

int main()
{
	Base b;
	Derive d;

	//思路：取出b，d对象的前四个字节，就是序表的指针
	//1、先取出b的地址强转成int*的指针
	//2、解引用取值，就取到b对象的4个字节的值
	//3、再强转成VFPTR*，因为序表就是存VFPTR（虚函数指针）类型的数组
	//4、序表指针传递给PrintVTable打印序表
	VFPTR* vTableb = (VFPTR*)(*(int*)&b);
	PrintVTable(vTableb);

	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
	PrintVTable(vTabled);
	system("pause");
	return 0;
}
