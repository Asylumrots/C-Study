#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main1()
{
	//有符号 signed 无符号 unsigned
	//%u 表示输出一个无符号的十进制整形
	unsigned int a = 10;
	printf("%u\n", a);
	return 0;
}

int main2()
{
	//定义一个八进制（0-7表示）数据以0开头
	int a = 0123;
	printf("%o\n", a);

	//定义一个十六进制（0-9 a-b(A-B)）以0x开头
	int b = 0x123;
	printf("%x\n", b);//%X

	//不可以直接定义二进制数据
	return 0;
}

int main4()
{
	int a;
	//scanf表示键盘输入 &运算符 表示取地址运算符	
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;
}