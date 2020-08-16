#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	/**
	 *
	 * @param datas int整型vector<vector<>> 待排序数据
	 * @return int整型vector<vector<>>
	 */

	vector<vector<int> > sort(vector<vector<int> >& datas)
	{
		// write code here
		int m = datas.size();
		int n = datas[0].size();

		vector<vector<int>> res{ {} };
		if (m == 0)
		{
			return res;
		}

		for (int i = 0; i < m; i++)
		{
			for (int j = i; j < m; j++)
			{
				if (datas[i][0] > datas[j][0])
				{
					swap(datas[i], datas[j]);
				}
			}
		}

		for (int i = 0; i < m - 1; i++)
		{
			if (datas[i][0] == datas[i + 1][0])
			{
				if (datas[i][1] < datas[i + 1][1])
				{
					swap(datas[i], datas[i + 1]);
				}
			}
		}

		return datas;
	}
};

int main()
{
	vector<vector<int>> num;
	vector<vector<int>> num1;
	vector<vector<int>> num2;
	vector<vector<int>> num3;
	vector<vector<int>> num4;
	vector<vector<int>> num5;
	num = { {12,44,22},{4,23,11},{12,45,34},{4,22,19} };
	num5 = { {} };
	num2 = { {1,2,3,4} };
	num3 = { {1,2,3,4},{1,3,2,4} };
	num4 = { {1,2,3,4},{1,3,2,4},{2,2,3,4},{2,3,2,4} };
	Solution a;

	num1 = a.sort(num5);
	for (int i = 0; i < num1.size(); i++)
	{
		for (int j = 0; j < num1[i].size(); j++)
		{
			cout << num1[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}