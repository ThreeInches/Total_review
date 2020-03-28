#include <iostream>

using namespace std;

class Student
{
public:

	void PrintStudentInfo()
	{
		cout << _name << " " << _gender << " " << _age << " " << endl;
	}

public:
	char* _name;
	char* _gender;
	int _age;
};

int main()
{
	Student stu;
	stu._name = "zhangsan";
	stu._gender = "mail";
	stu._age = 10;
	stu.PrintStudentInfo();
	system("pause");
	return 0;
}
