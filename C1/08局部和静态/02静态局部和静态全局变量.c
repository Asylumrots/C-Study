#include <stdio.h>

void func1()
{
	//静态局部变量 初始化一次在内存中  可以多次赋值使用 函数结束后不会销毁
	static int b = 10;
	printf("%d\n", b);
	b++;
}

void func2()
{
	//非静态局部变量  函数结束后销毁
	int b = 10;
	printf("%d\n", b);
	b++;
}

//静态全局变量  可以在本文档中使用不可以在其他文档中使用 随着程序的结束而销毁
static int b = 20;

int main02()
{
	static int a = 10;
	printf("%d\n", a);
	func1();
	func1();
	func2();
	func2();
	return 0;
}