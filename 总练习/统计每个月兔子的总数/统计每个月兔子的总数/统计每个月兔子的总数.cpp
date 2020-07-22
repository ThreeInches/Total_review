#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//int Fibonacci(int n)
//{
//	unordered_map<int, int> filter;
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//
//	int ppre = 0;
//	if (filter.find(n - 2) == filter.end())
//	{
//		ppre = Fibonacci(n - 2);
//		filter.insert({ n - 2, ppre });
//	}
//	else
//	{
//		ppre = filter[n - 2];
//	}
//
//	int pre = 0;
//	if (filter.find(n - 1) == filter.end())
//	{
//		pre = Fibonacci(n - 1);
//		filter.insert({ n - 1, pre });
//	}
//	else
//	{
//		pre = filter[n - 1];
//	}
//
//	return pre + ppre;
//}

//int Fibonacci(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	int l1 = 1;
//	int l2 = 1;
//	int l = 1;
//	while (n > 2)
//	{
//		l = l1 + l2;
//		l1 = l2;
//		l2 = l;
//		n--;
//	}
//	return l;
//}

int Fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << Fibonacci(n) << endl;
	}
	system("pause");
	return 0;
}
