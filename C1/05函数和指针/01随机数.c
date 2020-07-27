#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main01()
{
	//创建随机数种子  导入time和stdlib头文件
	srand((int)time(NULL));//不撒种子直接使用rand为伪随机数（按照公式推算出来的固定随机数）
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", rand() % 10); //%10 0-9 %100 0-99 %1000 0-999
	}
	//%51+50 50-100

	return 0;
}