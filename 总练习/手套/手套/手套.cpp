#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Gloves
{
public:
	int findMinimum(int n, vector<int> left, vector<int> right)
	{
		int left_sum = 0, left_min = INT_MAX;
		int right_sum = 0, right_min = INT_MAX;
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			if (left[i] * right[i] == 0)
			{
				sum += left[i] + right[i];
			}
			else
			{
				left_sum += left[i];
				right_sum += right[i];
				left_min = min(left_min, left[i]);
				right_min = min(right_min, right[i]);
			}
		}

		return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
	}
};

int main()
{
	Gloves a;
	vector<int> left{ 0, 7, 1, 6 };
	vector<int> right{ 1, 5, 0, 6 };
	cout << a.findMinimum(4, left, right) << endl;
	system("pause");
	return 0;
}
