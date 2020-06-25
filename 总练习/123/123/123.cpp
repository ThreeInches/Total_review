
#include <iostream>


using namespace std;

int main()
{
	int sum;
	cin >> sum;
	int s = 0;
	for (int i = 144; i > 0; i--)
	{
		s = sum + i;
		cout << "A" << s << endl;
		sum = s;
	}
	system("pause");
	return 0;
}
