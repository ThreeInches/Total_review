#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int count = 0;
	int n;
	cin >> n;
	vector<int> tree(n);
	for (int i = 0; i < tree.size(); i++)
	{
		cin >> tree[i];
	}
	int p = tree.size() - 1;
	while (1)
	{
		sort(tree.begin(), tree.end());
		for (int i = 0; i < tree.size() - 1; i++)
		{
			tree[i] += 1;
		}
		tree[p] = tree[p] - 1;
		count++;
		for (p = tree.size() - 1; p >= 0; p--)
		{
			if (tree[p] != tree[p - 1])
			{
				break;
			}
		}
		if (tree[0] == tree[tree.size() - 1])
		{
			break;
		}
	}
	cout << count << endl;
	return 0;
}