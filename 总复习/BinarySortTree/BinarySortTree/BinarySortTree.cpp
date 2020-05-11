#include <iostream>
#include "BinarySortTree.h"

using namespace std;

int main()
{

	gwp::BSTree<int> bst;

	bst.Insert(5);
	bst.Insert(3);
	bst.Insert(8);
	bst.Insert(6);
	bst.Insert(4);
	bst.Insert(7);
	bst.Insert(1);
	bst.Insert(2);

	bst.Erase(2);
	system("pause");
	return 0;
}
