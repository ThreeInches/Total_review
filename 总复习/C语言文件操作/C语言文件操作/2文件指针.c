#include <stdio.h>
#include <stdlib.h>

//文件包含类型的声明
struct _iobuf1
{
	char *_ptr;
	int _cnt;
	char *_base;
	int _flag;
	int _file;
	int _charbuf;
	int _bufsiz;
	char _tmpfname;
};

typedef struct _iobuf1 FILE1;

int main2()
{
	FILE *pf;//创建FILE的指针变量
	system("pause");
	return 0;
}