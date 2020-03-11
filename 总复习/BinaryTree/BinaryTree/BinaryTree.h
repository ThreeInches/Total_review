#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "Queue.h"
#include "Stack.h"

typedef char BinaryTreeDataType;

typedef struct BinaryTreeNode
{
	BinaryTreeDataType _data;
	struct BinaryTreeNode *_left;
	struct BinaryTreeNode *_right;
}BinaryTreeNode;

//通过前序遍历数组"ABD##E#H##CF##G##"构建二叉树
BinaryTreeNode* BinaryTreeCreate(BinaryTreeDataType *arr);

//递归遍历
//前序遍历
void BinaryTreePreOrder(BinaryTreeNode *root);
//中序遍历
void BinaryTreeInOrder(BinaryTreeNode *root);
//后序遍历
void BinaryTreePostOrder(BinaryTreeNode *root);
//层序遍历
void BinaryTreeLevelOrder(BinaryTreeNode *root);

//非递归遍历
//前序遍历
void BinaryTreePreOrderNonR(BinaryTreeNode *root);
//中序遍历
void BinaryTreeInOrderNonR(BinaryTreeNode *root);
//后序遍历
void BinaryTreePostOrderNonR(BinaryTreeNode *root);
//返回二叉树的结点个数
int BinaryTreeSize(BinaryTreeNode *root);

//递归实现
//返回叶子结点个数
int BinaryTreeLeafSize(BinaryTreeNode *root);
//返回第K层结点个数
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);

//非递归实现
//返回叶子结点个数
int BinaryTreeLeafSize(BinaryTreeNode *root);
//返回第K层结点个数
int BinaryTreeLevelKSize(BinaryTreeNode *root, int k);

//查找节点x
BinaryTreeNode* BinaryTreeFind(BinaryTreeNode *root, BinaryTreeDataType x);
//判断是否为完全二叉树
void BinaryTreeComplete(BinaryTreeNode *root);
//销毁
void BinaryTreeDestory(BinaryTreeNode *root);
//打印二叉树节点
void BinaryTreePrint(BinaryTreeNode *root);

#endif //_BINARYTREE_H_