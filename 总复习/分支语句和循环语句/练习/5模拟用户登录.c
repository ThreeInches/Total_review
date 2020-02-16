#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main5() {
	int i;
	char password[20] = "";
	for (i = 0; i < 3; i++) {
		printf("请输入密码：");
		scanf("%s", &password);
		if (strcmp(password, "abcdef") == 0) {
			printf("密码正确，登录成功\n");
			break;
		}
		else {
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3){
		printf("输入次数超过三次，无法登录");
	}
	system("pause");
	return 0;
}