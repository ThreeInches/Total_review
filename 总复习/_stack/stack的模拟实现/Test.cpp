#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
	gwp::stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	cout << s.size() << endl;
	cout << s.empty() << endl;
	cout << s.top() << endl;

	s.pop();

	cout << s.top() << endl;

	system("pause");
	return 0;
}
