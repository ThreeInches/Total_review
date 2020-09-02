#include <set>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> s;
	s.push_back(1);
	s.push_back(2);
	s.push_back(2);
	s.push_back(2);
	s.push_back(1);
	set<int> s2;
	for (auto& e : s)
	{
		s2.insert(e);
	}
	cout << s.size() << endl;
	cout << s2.size() << endl;
	return 0;
}