#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findNum(vector<int>& nums)
{
	unordered_map<int, int> um;
	for (auto& e : nums)
	{
		um[e]++;
		if (um[e] > 1)
		{
			return e;
		}
	}
	return -1;
}

int main()
{

	return 0;
}