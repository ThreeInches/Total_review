#include <iostream>

using namespace std;

//一个catch不能完全处理一个异常，在进行一些校正处理后，希望再交给更外层的调用链函数来处理，catch则可以通过重新抛出将异常传递给更上层的函数进行处理

double Division(int a, int b)
{
	//当b == 0时抛出异常
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	else
	{
		return ((double)a / (double)b);
	}
}

void Func()
{
	//如果发生除0错误抛出异常
	//array没有释放抛出异常
	//捕获异常交给外面处理，这里捕获后重新抛出
	int* array = new int[10];
	try
	{
		int len, time;
		cin >> len >> time;
		cout << Division(len, time) << endl;
	}
	catch (...)
	{
		cout << "delete[]" << array << endl;
		delete[] array;
		throw;
	}
	cout << "delete[]" << array << endl;
	delete[] array;
}

int main()
{
	try
	{
		Func();
	}
	catch (const char* errmsg)
	{
		cout << errmsg << endl;
	}
	system("pause");
	return 0;
}
