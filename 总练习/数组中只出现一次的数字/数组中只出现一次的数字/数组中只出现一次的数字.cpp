#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
	{
		if (num1 == nullptr || num2 == nullptr)
		{
			return;
		}

		int res = data[0];
		for (int i = 1; i < data.size(); i++)
		{
			res ^= data[i];
		}

		int flag = 1;
		int len = sizeof(int);
		for (int i = 0; i < len; i++)
		{
			if ((flag << i) & res)
			{
				flag <<= i;
				break;
			}
		}

		*num1 = 0;
		*num2 = 0;
		for (int i = 0; i < data.size(); i++)
		{
			if (data[i] & flag)
			{
				*num1 ^= data[i];
			}
			else
			{
				*num2 ^= data[i];
			}
		}
	}
};

int main()
{

	system("pause");
	return 0;
}
