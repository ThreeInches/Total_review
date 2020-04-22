#include <iostream>
#include <string>

using namespace std;

//继承机制是面向对象程序设计使代码可以复用的最重要手段，它允许程序员在保持原有的类特性的基础上进行扩展，增加功能
//继承呈现了面向对象程序设计的层次结构，体现了由简单到复杂的认知过程，继承是类设计层次的复用

class person
{
public:
	void print()
	{
		cout << "name : " << m_name << endl;
		cout << "age : " << m_age << endl;
	}
protected:
	string m_name = "zhangsan";
	int m_age = 18;
};

//继承父类的person的成员（成员函数+成员变量）
class student : public person
{
protected:
	int m_stuid;
};

class teacher : public person
{
protected:
	int m_jobid;
};

int main()
{
	student stu;
	teacher ter;

	stu.print();
	ter.print();
	system("pause");
	return 0;
}
