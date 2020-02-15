#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[20];//名字
	int age;//年龄
	char sex[5];//性别
	char id[15];//学号
};

int main14()
{
	struct Student Stu = { "张三", "20", "男", "20200202" };
	printf("name = %s age = %d sex = %s id = %s", Stu.name, Stu.age, Stu.sex, Stu.id);
	system("pause");
	return 0;
}