#include <iostream>
#include <string>

int NumChar(std::string str)
{
	int BigChar = 0;
	int SmallChar = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			BigChar++;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			SmallChar++;
		}
	}

	if (BigChar + SmallChar == 0)
	{
		return 0;
	}else if ((BigChar == str.size()) || (SmallChar == str.size()))
	{
		return 10;
	}else if ((BigChar != 0) && (SmallChar != 0))
	{
		return 20;
	}

	return 0;
}

int NumNumber(std::string str)
{
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			count++;
		}
	}

	if (count == 0)
	{
		return 0;
	}
	else if(count == 1)
	{
		return 10;
	}
	else
	{
		return 20;
	}
}

int NumOther(std::string str)
{
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 48 && str[i] <= 57))
		{
			count++;
		}
	}

	if (count == 0)
	{
		return 0;
	}
	else if (count == 1)
	{
		return 10;
	}
	else
	{
		return 25;
	}
}

int main()
{
	std::string str;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;
	int sum = 0;

	while (std::cin >> str)
	{
		if (str.size() <= 4)
		{
			sum1 = 5;
		}
		else if (str.size() >= 8)
		{
			sum1 = 25;
		}
		else
		{
			sum1 = 10;
		}

		sum2 = NumChar(str);
		sum3 = NumNumber(str);
		sum4 = NumOther(str);

		if ((sum2 > 0) && (sum3 > 0) && (sum4 > 0))
		{
			if (sum2 == 10)
			{
				sum5 = 3;
			}
			else
			{
				sum5 = 5;
			}
		}
		else if ((sum2 > 0) && (sum3 > 0) && (sum4 == 0))
		{
			sum5 = 2;
		}

		sum = sum1 + sum2 + sum3 + sum4 + sum5;

		if (sum >= 90)
		{
			std::cout << "VERY_SECURE" << std::endl;
		}
		else if (sum >= 80)
		{
			std::cout << "SECURE" << std::endl;
		}
		else if (sum >= 70)
		{
			std::cout << "VERY_STRONG" << std::endl;
		}
		else if (sum >= 60)
		{
			std::cout << "STRONG" << std::endl;
		}
		else if (sum >= 50)
		{
			std::cout << "AVERAGE" << std::endl;
		}
		else if (sum >= 25)
		{
			std::cout << "WEAK" << std::endl;
		}
		else
		{
			std::cout << "VERY_WEAK" << std::endl;
		}

		std::cout << sum2 << std::endl;
		std::cout << sum3 << std::endl;
		std::cout << sum4 << std::endl;
	}

	system("pause");
	return 0;
}
