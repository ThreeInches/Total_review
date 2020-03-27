#include <iostream>

using namespace std;

class ClassName
{
	//类体：由成员函数和成员变量组成
};//大括号的结尾必须加分号

//例如:
class Person
{
public:
	void ShowInfo()
	{
		cout << _name << " " << _sex << " " << _age << endl;
	}
public:
	char* _name;
	char* _sex;
	int _age;
};

int main()
{

	system("pause");
	return 0;
}
