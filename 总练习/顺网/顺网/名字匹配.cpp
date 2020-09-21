#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

bool matchNames(std::string alias, std::string names)
{
	int m = alias.size();
	int n = names.size();
	std::string tmp = names + ' ';
	std::vector<std::string> vs;
	auto pos = tmp.find(' ');
	while (pos != std::string::npos)
	{
		std::string s = tmp.substr(0, pos);
		vs.push_back(s);
		tmp = tmp.substr(pos + 1);
		pos = tmp.find(' ');
		s.clear();
	}

	if (alias.size() != vs.size())
	{
		return false;
	}
	for (int i = 0; i < vs.size(); i++)
	{
		if (alias[i] != vs[i])
		{
			return false;
		}
	}
	return true;
}



int main()
{
	std::string alias;
	getline(std::cin, alias);
	std::string names;
	getline(std::cin, names);
	printf("%d\n", matchNames(alias, names));
	return 0;
}