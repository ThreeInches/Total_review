#include <iostream>
#include <vector>

using namespace std;

int num(vector<int>& v, int num)
{
	int left = 0;
	int right = v.size() - 1;
	int mid = -2;

	while (left < right)
	{
		mid = left + (right - left) / 2;
		if (v[mid] < num)
		{
			left = mid + 1;
		}
		else if (v[mid] > num)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}
	int i = mid + 1;
	for (; i < v.size() - 1; i++)
	{
		if (v[i] != num)
		{
			break;
		}
	}
	return (i > v.size() - 1) ? i : -1;
}

int main()
{
	vector<int> v{ 1,2,2,2,2,3,4,5,6,7,8,9,0 };
	cout << num(v, 2) << endl;
	cout << num(v, 1) << endl;
	cout << num(v, 10) << endl;
	return 0;
}