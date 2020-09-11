#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_GRAPH 100
#define MAX_QUEUE 30

typedef struct
{
	int vex[MAX_GRAPH]; /* 顶点 */
	int edge[MAX_GRAPH][MAX_GRAPH]; /* 邻接矩阵 */
	int n; /* 当前的顶点数 */
	int e; /* 当前的边数 */
}GRAPH;

int visited[MAX_GRAPH];

void Create(GRAPH *G)
{
	printf("输入顶点数：\n");
	scanf("%d", &G->n);
	printf("输入边数：\n");
	scanf("%d", &G->e);

	getchar();

	int i, j, k, w;
	printf("请输入端点(int型)：\n");
	for (i = 0; i < G->n; ++i) /* 建立表头 */
		scanf("%d", &G->vex[i]);

	for (i = 0; i < G->n; ++i) /* 初始化邻接矩阵 */
		for (j = 0; j < G->n; ++j)
			G->edge[i][j] = 0;

	printf("请输入边：\n");
	for (k = 0; k < G->e; ++k)
	{
		scanf("%d%d%d", &i, &j, &w); /* 输入(vi,vj)上的权w */
		G->edge[i][j] = w;
		G->edge[j][i] = w;
	}
}

void BFS(GRAPH *G, int k)
{
	int queue[MAX_QUEUE]; /* 队列 */
	int front = -1, rear = -1, amount = 0;
	int visited[MAX_GRAPH]; /* 标记已经访问过的元素 */
	int i, j;

	for (i = 0; i < MAX_GRAPH; ++i)
		visited[i] = 0;

	printf("访问顶点%d\n", G->vex[k]);
	visited[k] = 1;

	rear = (rear + 1) % MAX_QUEUE; /* 入队操作 */
	queue[rear] = k;
	front = rear;
	++amount;

	while (amount > 0)
	{
		i = queue[front]; /* 出队操作 */
		front = (front + 1) % MAX_QUEUE;
		--amount;

		for (j = 0; j < G->n; ++j)
		{
			if (G->edge[i][j] != 0 && visited[j] == 0)
			{
				printf("访问顶点%d\n", G->vex[j]);
				visited[j] = 1;

				rear = (rear + 1) % MAX_QUEUE; /* 入队 */
				queue[rear] = j;
				++amount;
			}
		}
	}
	printf("遍历结束\n");
}

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < MAX_QUEUE; ++i)
		visited[i] = 0;
	GRAPH G;
	Create(&G);
	/* BFS(&G,0);*/
	BFS(&G, 0);

	return 0;
}