#include "RBTree.h"

int main()
{
	RBTree<int, double> rb;

	rb.Insert(pair<int, double>(1, 1.1));
	rb.Insert(pair<int, double>(2, 2.2));
	rb.Insert(pair<int, double>(3, 3.3));
	rb.Insert(pair<int, double>(4, 4.4));

	rb.InOrder();
	system("pause");
	return 0;
}