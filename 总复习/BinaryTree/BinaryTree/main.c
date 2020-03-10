#include "BinaryTree.h"
#include "Queue.h"
#include "Stack.h"

int main()
{
	BinaryTreeDataType arr[] = "ABD##E#H##CF##G##";
	BinaryTreeNode *root = BinaryTreeCreate(arr);

	BinaryTreePreOrder(root);
	putchar('\n');
	BinaryTreeInOrder(root);
	putchar('\n');
	BinaryTreePostOrder(root);
	putchar('\n');
	BinaryTreeLevelOrder(root);
	putchar('\n');
	BinaryTreePreOrderNonR(root);
	putchar('\n');
	BinaryTreeInOrderNonR(root);
	putchar('\n');

	system("pause");
	return 0;
}