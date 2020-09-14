#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	//计算n个连续candies的最大和，将相应的下标改为0
	//遍历这个数组，找出coin为0的对应的candies的下标的数组和，即为最终结果
	int MaxSum(vector<int>& res, int n)
	{
		int m_max = 0;
		int i = 0;
		int sum = 0;
		vector<int> tmp;
		while (i < res.size() - n)
		{
			for (int j = i; j < n; j++)
			{
				sum += res[j];
			}
			tmp.push_back(sum);
			sum = 0;
			i++;
		}
		int a = 0;
		for (int k = 1; k < tmp.size(); k++)
		{
			if (tmp[k] > tmp[k - 1])
			{
				a = k;
			}
		}
		return a;
	}

	int Sum(vector<int>& candies, vector<int>& coin)
	{
		int s = 0;
		for (int i = 0; i < candies.size(); i++)
		{
			if (coin[i] == 0)
			{
				s += candies[i];
			}
		}
		return s;
	}

	int maxCandies(vector<int>& candies, vector<int>& coin, int n)
	{
		if (n == 0)
		{
			return Sum(candies, coin);
		}

		for (int i = MaxSum(candies, n); i <= n; i++)
		{
			coin[i] = 0;
		}

		int res = Sum(candies, coin);
		return res;
	}
};

int main()
{
	vector<int> res{ 3,5,7,2,8,8,15,3 };
	int m_max = res[0];
	int sum = res[0];
	for (int i = 1; i < res.size(); i++)
	{
		if (sum < 0)
		{
			sum = res[i];
		}
		else
		{
			sum += res[i];
		}
		if (sum > m_max)
		{
			m_max = sum;
		}
	}
	cout << sum << endl;

	int s = 0;
	vector<int> a{ 1,0,1,0,1,0,1,0 };
	for (int i = 0; i < res.size(); i++)
	{
		if (a[i] == 0)
		{
			s += res[i];
		}
	}
	cout << s << endl;
	return 0;
}