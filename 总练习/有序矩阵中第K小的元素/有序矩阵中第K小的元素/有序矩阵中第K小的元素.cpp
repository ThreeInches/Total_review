#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int kthSmallest(vector<vector<int>>& matrix, int k)
	{
		vector<int> tmp;
		for (auto& e : matrix)
		{
			tmp.insert(tmp.begin(), matrix.begin(), matrix.end());
		}

		sort(tmp.begin(), tmp.end());
		return tmp[k - 1];
	}
};

int main()
{
	Solution a;
	vector<vector<int>> b{ { 1, 5, 9 },
							{ 10, 11, 13 },
							{12, 13, 15 } };
	cout << a.kthSmallest(b, 8) << endl;
	system("pause");
	return 0;
}
