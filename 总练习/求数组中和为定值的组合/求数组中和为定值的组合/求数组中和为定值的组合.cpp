#include <iostream>
#include <vector>

using namespace std;

void sumn(vector<int> &A, int start, int end, int sum, vector<int> &tmp, vector<vector<int>> &res) {
	if (start == end && sum == 0)
	{
		res.push_back(tmp);
	}
	else if (start == end) return;
	else {
		if (sum >= A[start]) {
			tmp.push_back(A[start]);
			sumn(A, start + 1, end, sum - A[start], tmp, res);
			tmp.pop_back();
		}
		sumn(A, start + 1, end, sum, tmp, res);
	}
}

int main()
{
	vector<int> A{ 202, 100, 88, 50, 41, 41, 34, 25, 23, 12, 11, 6, -102 };
	vector<vector<int>> res;
	vector<int> tmp;
	int sum = 0;
	sumn(A, 0, A.size() - 1, sum, tmp, res);

	for (int i = 0; i < res.size(); i++)
	{
		for (int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}