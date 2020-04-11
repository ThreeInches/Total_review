#include <iostream>
#include <stack>

using namespace std;

void TestStack1()
{
	stack<int> s1;//构造s1
	stack<int> s2(s1);//拷贝构造s2
}

void TestStack2()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	cout << s.empty() << endl;
	cout << s.size() << endl;
	cout << s.top() << endl;
	
	for (int i = 0; i < s.size(); i++)
	{
		cout << s.top() << endl;
		s.pop();
	}
}

int main()
{
	TestStack1();
	TestStack2();
	system("pause");
	return 0;
}
