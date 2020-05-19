#include <iostream>

using namespace std;

#include "AVL.h"

int main()
{
	AVLTree<int, double> avl;

	avl.insert(make_pair(1, 1.1));
	avl.insert(make_pair(2, 2.2));
	avl.insert(make_pair(3, 3.3));
	avl.insert(make_pair(4, 4.4));

	avl[5] = 5.5;
	avl[6] = 6.6;

	cout << avl.IsBalance() << endl;

	system("pause");
	return 0;
}