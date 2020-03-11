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
	//BinaryTreePreOrderNonR(root);
	//putchar('\n');
	//BinaryTreeInOrderNonR(root);
	//putchar('\n');
	BinaryTreePostOrderNonR(root);
	putchar('\n');
	//printf("BinaryTreeSize = %d\n", BinaryTreeSize(root));
	printf("BinaryTreeLeafSize = %d\n", BinaryTreeLeafSize(root));
	printf("BinaryTreeLevelKSize = %d\n", BinaryTreeLevelKSize(root, 2));
	printf("BinaryTreeFind = %p\n", BinaryTreeFind(root, 'G'));
	system("pause");
	return 0;
}