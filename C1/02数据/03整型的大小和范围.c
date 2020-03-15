#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main03()
{
	int a = 10;
	//定义一个短整型
	short b = 20;
	//%hd输出短整型
	printf("%hd\n", b);

	//定义一个长整型
	long c = 30;
	//%ld输出长整型
	printf("%ld\n", c);

	//定义一个长长整型
	long long d = 40;
	//%lld输出长长整型
	printf("%lld\n", d);


	//sizeof表示计算数据类型在内存中占用的字节(byte)大小
	//1b=8bit
	//sizeof(数据类型) sizeof(变量名)
	unsigned int s = sizeof(b);
	printf("%d", s);

	return 0;
}