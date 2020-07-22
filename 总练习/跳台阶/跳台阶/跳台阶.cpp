#include <iostream>
#include <vector>

using namespace std;

//class Solution
//{
//public:
//	int jumpFloor(int number)
//	{
//		int l1 = 1;
//		int l2 = 2;
//		int l = number;
//		while (number > 2)
//		{
//			l = l1 + l2;
//			l1 = l2;
//			l2 = l;
//			number--;
//		}
//
//		return l;
//	}
//};

class Solution
{
public:
	int jumpFloor(int number)
	{
		vector<int> res(number + 1);
		res[0] = 1;
		res[1] = 1;
		for (int i = 2; i <= number; i++)
		{
			res[i] = res[i - 1] + res[i - 2];
		}

		return res[number];
	}
};

int main()
{
	Solution a;
	cout << a.jumpFloor(5) << endl;
	system("pause");
	return 0;
}
