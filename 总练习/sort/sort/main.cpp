#include "sort.h"

int main()
{
	Sort a;
	vector<int> array{ 3, 2, 4, 1, 5, 6, 7, 9, 8, 0 };
	for (auto& e : array)
	{
		cout << e << " ";
	}
	cout << endl;

	a.BubbleSort(array);

	for (auto& e : array)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}