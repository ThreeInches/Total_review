#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
	{
		vector<int> res;
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());


		int i = 0, j = 0;

		while (i != nums1.size() && j != nums2.size())
		{
			if (nums1[i] < nums2[j])
			{
				i++;
			}
			else if (nums1[i] > nums2[j])
			{
				j++;
			}
			else
			{
				res.push_back(nums1[i]);
				i++;
				j++;
			}
		}
		return res;
	}
};

int main()
{
	Solution a;
	vector<int> nums1{ 1, 2, 2, 1 };
	vector<int> nums2{ 2, 2 };
	vector<int> res = a.intersect(nums1, nums2);
	for (auto & e : res)
	{
		cout << e << " ";
	}
	system("pause");
	return 0;
}
