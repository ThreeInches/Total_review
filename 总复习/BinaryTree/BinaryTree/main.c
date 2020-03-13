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
	BinaryTreePostOrderNonR(root);
	putchar('\n');
	printf("BinaryTreeSize = %d\n", BinaryTreeSize(root));
	printf("BinaryTreeLeafSize = %d\n", BinaryTreeLeafSize(root));
	printf("BinaryTreeLevelKSize = %d\n", BinaryTreeLevelKSize(root, 1));
	printf("BinaryTreeLevelKSize = %d\n", BinaryTreeLevelKSize(root, 2));
	printf("BinaryTreeLevelKSize = %d\n", BinaryTreeLevelKSize(root, 3));
	printf("BinaryTreeLevelKSize = %d\n", BinaryTreeLevelKSize(root, 4));
	printf("BinaryTreeFind = %p\n", BinaryTreeFind(root, 'G'));
	printf("BinaryTreeComplete = %d\n", BinaryTreeComplete(root));
	printf("BinaryTreeLevelKSizeNonR = %d\n", BinaryTreeLevelKSizeNonR(root, 1));
	printf("BinaryTreeLevelKSizeNonR = %d\n", BinaryTreeLevelKSizeNonR(root, 2));
	printf("BinaryTreeLevelKSizeNonR = %d\n", BinaryTreeLevelKSizeNonR(root, 3));
	printf("BinaryTreeLevelKSizeNonR = %d\n", BinaryTreeLevelKSizeNonR(root, 4));

	system("pause");
	return 0;
}
