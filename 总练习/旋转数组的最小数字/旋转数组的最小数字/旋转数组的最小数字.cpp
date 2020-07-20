#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
	int minNumberInRotateArray(vector<int> rotateArray)
	{
		if (rotateArray.empty())
		{
			return 0;
		}

		int left = 0;
		int right = rotateArray.size() - 1;
		int mid = 0;
		while (rotateArray[left] >= rotateArray[right])
		{
			if (right - left == 1)
			{
				mid = right;
				break;
			}

			if (rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid])
			{
				for (int i = 0; i < rotateArray.size(); i++)
				{
					if (rotateArray[i] > rotateArray[i + 1])
					{
						return rotateArray[i + 1];
					}
				}

				return rotateArray[0];
			}

			mid = (right + left) / 2;
			if (rotateArray[mid] >= rotateArray[left])
			{
				left = mid;
			}
			else if (rotateArray[mid] <= rotateArray[right])
			{
				right = mid;
			}
		}

		return rotateArray[mid];
	}
};

int main()
{
	Solution a;
	vector<int> v{ 3, 4, 5, 1, 2 };
	cout << a.minNumberInRotateArray(v) << endl;
	system("pause");
	return 0;
}
