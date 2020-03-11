#include "BinaryTree.h"
#include "Queue.h"
#include "Stack.h"

//通过前序遍历数组"ABD##E#H##CF##G##"构建二叉树
BinaryTreeNode* BinaryTreeCreate(BinaryTreeDataType *arr)
{
	static int i = 0;
	if (arr[i] == '#')
	{
		i++;
		return NULL;
	}
	BinaryTreeNode *cur = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
	cur->_data = arr[i];
	i++;
	cur->_left = BinaryTreeCreate(arr);
	cur->_right = BinaryTreeCreate(arr);
	return cur;
}

//递归遍历
//前序遍历
void BinaryTreePreOrder(BinaryTreeNode *root)
{
	if (root)
	{
		putchar(root->_data);
		BinaryTreePreOrder(root->_left);
		BinaryTreePreOrder(root->_right);
	}
}

//中序遍历
void BinaryTreeInOrder(BinaryTreeNode *root)
{
	if (root)
	{
		BinaryTreeInOrder(root->_left);
		putchar(root->_data);
		BinaryTreeInOrder(root->_right);
	}
}

//后序遍历
void BinaryTreePostOrder(BinaryTreeNode *root)
{
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		putchar(root->_data);
	}
}

//层序遍历
void BinaryTreeLevelOrder(BinaryTreeNode *root)
{
	BinaryTreeNode *cur;
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, root);
	while (!QueueEmpty(&queue))
	{
		cur = QueueFront(&queue);
		putchar(cur->_data);
		if (cur->_left)
		{
			QueuePush(&queue, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&queue, cur->_right);
		}
		QueuePop(&queue);
	}
	QueueDestory(&queue);
}

//非递归遍历
//前序遍历
void BinaryTreePreOrderNonR(BinaryTreeNode *root)
{
	BinaryTreeNode *cur = root;
	Stack stack;
	StackInit(&stack, 100);
	while (cur)
	{
		putchar(cur->_data);
		if (cur->_right)
		{
			StackPush(&stack, cur->_right);
		}
		if (cur->_left)
		{
			cur = cur->_left;
		}
		else
		{
			cur = StackTop(&stack);
			StackPop(&stack);
		}
	}
	StackDestory(&stack);
}

//中序遍历
void BinaryTreeInOrderNonR(BinaryTreeNode *root)
{
	assert(root);
	BinaryTreeNode *cur = root;
	Stack stack;
	StackInit(&stack, 100);
	while (!StackEmpty(&stack) || cur)
	{
		for (; cur; cur->_left)
		{
			StackPush(&stack, cur);
		}
		cur = StackTop(&stack);
		putchar(cur->_data);
		StackPop(&stack);
		cur = cur->_right;
	}
	StackDestory(&stack);
}

//后序遍历
void BinaryTreePostOrderNonR(BinaryTreeNode *root)
{
	assert(root);
	BinaryTreeNode *cur = root;
	Stack stack;
	char tag[100];
	StackInit(&stack, 100);
	do
	{
		for (; cur; cur = cur->_left)
		{
			StackPush(&stack, cur);
			tag[StackSize(&stack) - 1] = 0;
		}
		while (!StackEmpty(&stack) && tag[StackSize(&stack) - 1])
		{
			cur = StackTop(&stack);
			putchar(cur->_data);
			StackPop(&stack);
		}
		if (!StackEmpty(&stack))
		{
			cur = StackTop(&stack);
			tag[StackSize(&stack) - 1] = 1;
			cur = cur->_right;
		}
	} while (!StackEmpty(&stack));
	StackDestory(&stack);
}

//返回二叉树的结点个数
int BinaryTreeSize(BinaryTreeNode *root)
{
	int count = 0;
	BinaryTreeNode *cur = root;
	Stack stack;
	StackInit(&stack, 100);
	while (cur)
	{
		count++;
		//putchar(cur->_data);
		if (cur->_right)
		{
			StackPush(&stack, cur->_right);
		}
		if (cur->_left)
		{
			cur = cur->_left;
		}
		else
		{
			cur = StackTop(&stack);
			StackPop(&stack);
		}
	}
	StackDestory(&stack);
	return count;
}

//递归实现
//返回叶子结点个数
int BinaryTreeLeafSize(BinaryTreeNode *root)
{
	if (root == NULL)
	{
		return 0;
	}
	else if ((root->_left == NULL) && (root->_right == NULL))
	{
		return 1;
	}
	else
	{
		return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
	}
}

//返回第K层结点个数
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k)
{
	if (root && k <= 0)
	{
		return 0;
	}
	else if (root && k == 1)
	{
		return 1;
	}
	else
	{
		return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
	}
}

//非递归实现
//返回叶子结点个数
int BinaryTreeLeafSize(BinaryTreeNode *root);
//返回第K层结点个数
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);

//查找节点x
BinaryTreeNode* BinaryTreeFind(BinaryTreeNode *root, BinaryTreeDataType x)
{
	BinaryTreeNode *cur;
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, root);
	while (!QueueEmpty(&queue))
	{
		cur = QueueFront(&queue);
		//putchar(cur->_data);
		if (cur->_data == x)
		{
			return cur;
		}
		if (cur->_left)
		{
			QueuePush(&queue, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&queue, cur->_right);
		}
		QueuePop(&queue);
	}
	QueueDestory(&queue);
}

//判断是否为完全二叉树
void BinaryTreeComplete(BinaryTreeNode *root);

//销毁
void BinaryTreeDestory(BinaryTreeNode *root)
{
	assert(root);
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		free(root);
		root = NULL;
	}
}

//打印二叉树节点
void BinaryTreePrint(BinaryTreeNode *root);
