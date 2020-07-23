#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int minArray(vector<int>& numbers)
	{
		if (numbers.size() == 1)
		{
			return numbers[0];
		}

		int l1 = 0;
		int l2 = 1;
		while (numbers[l1] <= numbers[l2])
		{
			l1++;
			l2++;
			if (l2 == numbers.size())
			{
				return numbers[0];
			}
		}

		return numbers[l2];
	}
};

int main()
{
	Solution a;
	vector<int> numbers{ 1, 3, 5 };
	cout << a.minArray(numbers) << endl;
	system("pause");
	return 0;
}
