#include <stdio.h>
#include <stdlib.h>

//结构体传参首选传地址，这样结构体过大的情况下可以防止参数压栈过程中开销过大，导致性能下降的问题

struct qwe
{
	int data[2000];
	int num;
};

struct qwe q = { { 1, 2, 3, 4 }, 1000 };

//结构体传参
void Print1(struct qwe q)
{
	printf("%d\n", q.num);
}

void Print2(struct qwe *q)
{
	printf("%d\n", q->num);
}

int main6()
{
	Print1(q); //传结构体
	Print2(&q);//传地址
	system("pause");
	return 0;
}