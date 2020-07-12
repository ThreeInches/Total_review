#include <iostream>

using namespace std;

class BinInsert
{
public:
	int binInsert(int n, int m, int j, int i)
	{
		m <<= j;
		return n | m;
	}
};

int main()
{
	BinInsert a;
	cout << a.binInsert(1024, 19, 2, 6) << endl;
	system("pause");
	return 0;
}
