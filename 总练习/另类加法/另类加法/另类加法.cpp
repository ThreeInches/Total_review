#include <iostream>

using namespace std;

class UnusualAdd
{
public:
	int addAB(int A, int B)
	{
		int sum = 0;
		int carry = 0;
		while (B)
		{
			sum =  A^B;
			carry = (A&B) << 1;
			A = sum;
			B = carry;
		}

		return sum;
	}
};

int main()
{
	UnusualAdd a;
	cout << a.addAB(1, 2) << endl;
	system("pause");
	return 0;
}
