#include <iostream>
#include <vector>

using namespace std;

int main()
{
	try
	{
		vector<int> v(10, 5);
		//系统内存不够报错
		v.reserve(1000000);
		//越界报错
		v.at(10) = 100;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "Unknow Exception" << endl;
	}
	system("pause");
	return 0;
}
