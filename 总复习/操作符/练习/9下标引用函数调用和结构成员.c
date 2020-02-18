#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[20];
	int age;
	char sex[2];
	char id[20];
};

void get_age1(struct Student stu)
{
	stu.age = 18;
}

void get_age2(struct Student* pstu)
{
	pstu->age = 18;
}

int ADD(int x, int y)
{
	return x + y;
}

int main9()
{
	//下标引用
	int arr[10] = { 0 };
	arr[1] = 1;
	//函数调用
	int a = ADD(2, 3);
	//结构体成员访问
	struct Student stu;
	struct Student* pstu = &stu;

	stu.age = 20;
	get_age1(stu);

	pstu->age = 20;
	get_age2(pstu);

	system("pause");
	return 0;
}