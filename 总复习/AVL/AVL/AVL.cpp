#include <iostream>

using namespace std;

#include "AVL.h"

int main()
{
	AVLTree<int, double> avl;

	avl.insert(pair<int, double>(1, 1.1));
	avl.insert(pair<int, double>(2, 2.2));
	avl.insert(pair<int, double>(3, 3.3));
	avl.insert(pair<int, double>(4, 4.4));

	avl[5] = 5.5;
	avl[6] = 6.6;

	cout << avl.IsBalance() << endl;

	system("pause");
	return 0;
}