#include <iostream>
#include <string>

using namespace std;

//1、基类中的private成员在派生类中不可见（派生类不能访问这个private成员）
//2、若是基类成员不想被外界访问，只想让派生类访问，则用protected修饰
//3、public>protected>private
//4、class的默认访问限定符是private，struct的默认访问限定符是public
//5、一般常使用public继承

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

class student : protected person
{
protected:
	int m_stuid;
};
class student : private person
{
protected:
	int m_stuid;
};

class student : public person
{
protected:
	int m_stuid;
};

class teacher : protected person
{
protected:
	int m_jobid;
};

class teacher : private person
{
protected:
	int m_jobid;
};

class teacher : public person
{
protected:
	int m_jobid;
};

int main()
{

	system("pause");
	return 0;
}
