#ifndef _QUEUE_H_
#define _QUEUE_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int QueueDataType;

typedef struct QueueNode
{
	struct QueueNode *_next;
	QueueDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode *_front;
	QueueNode *_rear;
}Queue;

//初始化
void QueueInit(Queue *pqueue);
//销毁
void QueueDestory(Queue *pqueue);
//为链表开辟结点
QueueNode* BuyQueueNode(QueueDataType x);
//尾插
void QueuePush(Queue *pqueue, QueueDataType x);
//头删
void QueuePop(Queue *pqueue);
//返回队首元素
QueueDataType QueueFront(Queue *pqueue);
//返回队尾元素
QueueDataType QueueRear(Queue *pqueue);
//判空
int QueueEmpty(Queue *pqueue);
//返回队列长度
int QueueSize(Queue *pqueue);
//打印
void QueuePrint(Queue *pqueue);
#endif //_QUEUE_H_