#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main05()
{
	int a = 10, b = 20, c = 30;
	//比较运算符返回值为0或1  0为false 1为true 
	//所有非0的都是真值
	printf("%d\n", a > b);
	return 0;
}