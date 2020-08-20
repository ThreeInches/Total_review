#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		map<int, int> mp;

		for (int num : nums)
		{
			if (mp.count(num))   //´æÔÚnum
			{
				if (mp[num] == 2)
				{
					mp.erase(num);
				}
				else
				{
					mp[num] ++;
				}
			}
			else
			{
				mp[num] = 1;
			}
		}

		vector<int> res;
		for (int i = 0; i < nums.size(); i++)
		{
			if (mp[nums[i]] == 1)
			{
				res.push_back(nums[i]);
			}
		}

		return res;
	}
};

int main()
{
	Solution s;
	int arr[] = { 3,4,3,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	vector<int> vc(arr, arr + len);
	
	vector<int> vc{ 3,4,3,3 };

	return 0;
}