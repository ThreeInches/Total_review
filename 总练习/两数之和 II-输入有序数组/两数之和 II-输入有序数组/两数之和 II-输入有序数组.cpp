#include <iostream>
#include <vector>

using namespace std;

//class Solution
//{
//public:
//	vector<int> twoSum(vector<int>& numbers, int target)
//	{
//		vector<int> res;
//		for (int i = 1; i < numbers.size(); i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				if ((numbers[i] + numbers[j]) == target)
//				{
//					res.emplace_back(j + 1);
//					res.emplace_back(i + 1);
//					break;
//				}
//			}
//		}
//
//		return res;
//	}
//};

class Solution
{
public:
	vector<int> twoSum(vector<int>& numbers, int target)
	{
		vector<int> res;
		int left = 0;
		int right = numbers.size() - 1;
		while (left < right)
		{
			if (numbers[left] + numbers[right] == target)
			{
				return{ left + 1, right + 1 };
			}
			else if (numbers[left] + numbers[right] < target)
			{
				left++;
			}
			else
			{
				right--;
			}
		}

		return{ 0, 0 };
	}
};

int main()
{
	Solution a;
	vector<int> v{ 2, 7, 11, 15 };
	vector<int> res = a.twoSum(v, 9);
	for (auto& e : res)
	{
		cout << e << " ";
	}
	system("pause");
	return 0;
}
