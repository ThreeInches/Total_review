#include "map.h"
#include <map>

int main()
{
	gwp::map<int, double> m;
	m.insert(make_pair(1, 1.1));

	map<int, double> s;
	system("pause");
	return 0;
}
