#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<vector<int>> minSumOfLengths(vector<int>& A, int T)
	{
		vector<vector<int>> a;
		vector<int> tmp;
		int sum = 0;
		int i = 0;
		int index = 0;
		for (int i = 0; i < A.size(); i++)
		{
			if (sum < T)
			{
				sum += A[i];
				tmp.push_back(A[i]);
			}
			if (sum == T)
			{
				a.push_back(tmp);
			}
			auto p = tmp.begin();
			sum = 0;
			if (*p == A[i])
			{
				i += 1;
			}
			
		}

		return a;
	}
};

int main()
{
	vector<vector<int>> a;
	vector<int> A{ 3,2,2,4,3 };
	int T = 3;
	Solution s;
	a = s.minSumOfLengths(A, T);
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}