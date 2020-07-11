#include <iostream>
#include <algorithm>

int main()
{
	int n;
	while (std::cin >> n)
	{
		int count = 0;
		int maxCount = 0;

		while (n)
		{
			if (n & 1)
			{
				count++;
				maxCount = std::max(count, maxCount);
			}
			else
			{
				count = 0;
			}

			n >>= 1;
		}

		std::cout << maxCount << std::endl;
	}

	system("pause");
	return 0;
}
