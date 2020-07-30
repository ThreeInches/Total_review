#include <iostream>
#include <unordered_map>

using namespace std;

#include <iostream>
#include <unordered_map>

using namespace std;

//class Solution
//{
//public:
//	int Fibonacci(int n)
//	{
//		unordered_map<int, int> filter;
//		if (n == 0)
//		{
//			return 0;
//		}
//		if (n == 1 || n == 2)
//		{
//			return 1;
//		}
//
//		int ppre = 0;
//		if (filter.find(n - 2) == filter.end())
//		{
//			ppre = Fibonacci(n - 2);
//			filter.insert({ n - 2, ppre });
//		}
//		else
//		{
//			ppre = filter[n - 2];
//		}
//
//		int pre = 0;
//		if (filter.find(n - 1) == filter.end())
//		{
//			pre = Fibonacci(n - 1);
//			filter.insert({ n - 1, pre });
//		}
//		else
//		{
//			pre = filter[n - 1];
//		}
//
//		return ppre + pre;
//	}
//};

//class Solution
//{
//public:
//	int Fibonacci(int n)
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		if (n == 1 || n == 2)
//		{
//			return 1;
//		}
//
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//};

class Solution
{
public:
	int Fibonacci(int n)
	{
		int ppre = 1;
		int pre = 1;
		int res = 0;

		if (n == 0)
		{
			return 0;
		}
		if (n == 1 || n == 2)
		{
			return 1;
		}
		
		for (int i = 3; i <= n; i++)
		{
			res = ppre + pre;
			ppre = pre;
			pre = res;
		}

		return res;
	}
};

int main()
{
	Solution a;
	cout << a.Fibonacci(4) << endl;
	system("pause");
	return 0;
}
