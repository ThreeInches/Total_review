#include <stdio.h>
#include <stdlib.h>

//枚举类型常量
enum Sex
{
	MALE,
	FEMALE,
	SECrET
};

int main5()
{
	3.14;//字面常量
	1000;//字面常量
	const float pai = 3.14f;//const修饰的常量 
	//pai = 3.15; 不可以给常量赋值
	#define MAX 100
	system("pause");
	return 0;
}