#include <iostream>
#include <set>

using namespace std;

class lessKNum
{
public:
	int find(int array[], int n, int k)
	{
		set<int> s(array, array + n);
		int tmp[1001];
		int i = 0;

		for (auto& e : s)
		{
			tmp[i++] = e;
		}

		return tmp[k - 1];
	}
};

int main()
{
	int n;
	int array[1001];
	int k;

	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> array[i];
		}
		
		cin >> k;

		lessKNum a;
		cout << a.find(array, n, k) << endl;
	}
	system("pause");
	return 0;
}
