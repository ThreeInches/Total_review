#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	void reOrderArray(vector<int> &array)
	{
		int index = 0;
		vector<int> res;
		for (int i = 0; i < array.size(); i++)
		{
			if (array[i] % 2 != 0)
			{
				int tmp = array[i];
				for (int j = i; j > index; j--)
				{
					array[j] = array[j - 1];
				}
				array[index++] = tmp;
			}
		}
	}
};

int main()
{
	Solution a;
	vector<int> v{ 1, 2, 3, 4, 5, 6 };
	a.reOrderArray(v);
	for (auto&e : v)
	{
		cout << e << " ";
	}
	system("pause");
	return 0;
}
