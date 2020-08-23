#include <iostream>
#include <vector>

using namespace std;

//class solution
//{
//public:
//	vector<int> spiralorder(vector<vector<int>>& matrix)
//	{
//		vector<int> res;
//		if (matrix.size() == 0 || matrix[0].size() == 0) {
//			return {};
//		}
//
//		int m = matrix.size();
//		int n = matrix[0].size();
//
//		int top = 0;
//		int left = 0;
//		int right = n - 1;
//		int bottom = m - 1;
//
//		while (res.size() < m * n)
//		{
//			for (int i = left; i <= right; i++)
//			{
//				res.push_back(matrix[top][i]);
//			}
//			for (int i = top + 1; i <= bottom; i++)
//			{
//				res.push_back(matrix[i][right]);
//			}
//			for (int i = right - 1; i >= left && top < bottom; i--)
//			{
//				res.push_back(matrix[bottom][i]);
//			}
//			for (int i = bottom - 1; i >= top + 1 && left < right; i--)
//			{
//				res.push_back(matrix[i][left]);
//			}
//			top++;
//			left++;
//			right--;
//			bottom--;
//		}
//		return res;
//	}
//};

class solution
{
public:
	vector<vector<int>> deal(vector<int>& num)
	{
		
		int n = sqrt(num.size());

		int index = 0;
		int top = 0;
		int left = 0;
		int right = n - 1;
		int bottom = n - 1;

		vector<vector<int>> res(n, vector<int>(n));

		while (left <= right && top <= bottom)
		{
			for (int i = left; i <= right; i++)
			{
				res[top][i] = num[index];
				index++;
			}
			top++;
			for (int i = top; i <= bottom; i++)
			{
				res[i][right] = num[index];
				index++;
			}
			right--;
			for (int i = right; i >= left; i--)
			{
				res[bottom][i] = num[index];
				index++;
			}
			bottom--;
			for (int i = bottom; i >= top; i--)
			{
				res[i][left] = num[index];
				index++;
			}
			left++;
		}
		return res;
	}
};

int main()
{
	vector<vector<int>> res;
	solution a;
	vector<int> num{ 1,2,3,4,5,6,7,8,9 };
	res = a.deal(num);
	for (int i = 0; i < sqrt(num.size()); i++)
	{
		for (int j = 0; j < sqrt(num.size()); j++)
		{
			cout << res[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}