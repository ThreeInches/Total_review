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
	while (cur || !StackEmpty(&stack))
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

}

//返回二叉树的结点个数
int BinaryTreeSize(BinaryTreeNode *root)
{

}

//返回叶子结点个数
int BinaryTreeLeafSize(BinaryTreeNode *root);
//返回第K层结点个数
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);
//查找节点x
BinaryTreeNode* BinaryTreeFind(BinaryTreeNode *root, BinaryTreeDataType x);
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
