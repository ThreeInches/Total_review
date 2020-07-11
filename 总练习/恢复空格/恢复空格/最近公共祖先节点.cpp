#include <iostream>
#include <vector>
#include <string>

using namespace std;

class LCA {
public:
	int getLCA(int a, int b) {
		while (a != b)
		{
			if (a > b)
			{
				a /= 2;
			}
			else
			{
				b /= 2;
			}
		}

		return a;
	}
};

int main()
{
	LCA a;
	cout << a.getLCA(2, 3) << endl;
	system("pause");
	return 0;
}
