#include <iostream>

using namespace std;

class A
{
public:
	void PrintA()
	{
		cout << _a << endl;
	}
	
	void Show()
	{
		cout << "Show()" << endl;
	}

private:
	int _a;
};

int main()
{
	A* a = nullptr;
	a->PrintA();
	a->Show();

	system("pause");
	return 0;
}
