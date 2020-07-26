#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class comp
{
public:
	bool operator() (const int& a, const int& b)
	{
		return a < b;
	}
};

class Solution
{
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
	{
		vector<int> res;
		if (input.size() == 0 || k < 0 || k > input.size())
		{
			return res;
		}

		priority_queue<int, vector<int>, comp> pq;
		for (int i = 0; i < input.size(); i++)
		{
			if (i < k)
			{
				pq.push(input[i]);
			}
			else
			{
				if (input[i] < pq.top())
				{
					pq.pop();
					pq.push(input[i]);
				}
			}
		}

		for (int i = 0; i < k; i++)
		{
			res.push_back(pq.top());
			pq.pop();
		}

		return res;
	}
};

int main()
{
	Solution a;
	vector<int> v{ 4, 5, 1, 6, 2, 7, 3, 8 };
	vector<int> res;
	res = a.GetLeastNumbers_Solution(v, 4);
	for (auto& e : res)
	{
		cout << e << " ";
	}
	cout << endl;
	cout << res.empty() << endl;
	system("pause");
	return 0;
}
