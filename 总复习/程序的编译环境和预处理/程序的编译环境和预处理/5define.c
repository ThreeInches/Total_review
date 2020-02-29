#include <stdio.h>
#include <stdlib.h>

#define MAX 1000//最大值MAX=1000
#define reg register//为register创建一个短的关键字
#define do_forever for(;;)
#define CASE break;case//写case的时候自动补全break

//若是stuff过长的时候可以换行写，在每一行的后面要加上反斜杠（续航符）
#define DEBUG_PRINT printf("file:%s line:%d date:%d time:%d\n",\
					__FILE__,\
					__LINE__,\
					__DATE__,\
					__TIME__)
