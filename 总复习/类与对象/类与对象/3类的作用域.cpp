#include <iostream>

using namespace std;

class Person
{
public:
	void PrintPersonInfo();
private:
	char* _name;
	char* _sex;
	int _age;
};

void Person::PrintPersonInfo()
{
	cout << _name << " " << _sex << " " << _age << endl;
}

int main()
{

	system("pause");
	return 0;
}
