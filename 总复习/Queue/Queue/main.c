#include "Queue.h"

int main()
{
	Queue queue;
	QueueInit(&queue);
	QueuePush(&queue, 1);
	QueuePush(&queue, 2);
	QueuePush(&queue, 3);
	QueuePush(&queue, 4);
	QueuePush(&queue, 5);
	QueuePush(&queue, 6);
	QueuePush(&queue, 7);
	QueuePush(&queue, 8);
	QueuePush(&queue, 9);
	QueuePush(&queue, 10);
	QueuePrint(&queue);
	QueuePop(&queue);
	QueuePrint(&queue);
	printf("QueueFront = %d\n", QueueFront(&queue));
	printf("QueueRear = %d\n", QueueRear(&queue));
	printf("QueueEmpty = %d\n", QueueEmpty(&queue));
	printf("QueueSize = %d\n", QueueSize(&queue));
	QueueDestory(&queue);
	system("pause");
	return 0;
}