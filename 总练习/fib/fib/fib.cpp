#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//	int fib(int n) {
//		if (n == 0)
//		{
//			return 0;
//		}
//
//		if (n == 1 || n == 2)
//		{
//			return 1;
//		}
//
//		int l1 = 1;
//		int l2 = 1;
//		int l;
//
//		while (n > 2)
//		{
//			l = (l1 + l2) % 1000000007;
//			l1 = l2;
//			l2 = l;
//			n--;
//		}
//
//		return l % 1000000007;
//	}
//};

class Solution {
public:
	int fib(int n) {
		if (n == 0)
		{
			return 0;
		}

		if (n == 1 || n == 2)
		{
			return 1;
		}

		int l1 = 1;
		int l2 = 1;
		int l = 1;

		while (n > 2)
		{
			l = l1 + l2;
			l1 = l2;
			l2 = l;
			n--;
		}

		return (l % 1000000007);
	}
};

int main()
{
	Solution a;
	cout << a.fib(1) << endl;
	cout << a.fib(2) << endl;
	cout << a.fib(3) << endl;
	cout << a.fib(4) << endl;
	cout << a.fib(5) << endl;
	cout << a.fib(6) << endl;
	cout << a.fib(7) << endl;
	cout << a.fib(8) << endl;
	cout << a.fib(48) << endl;
	system("pause");
	return 0;
}