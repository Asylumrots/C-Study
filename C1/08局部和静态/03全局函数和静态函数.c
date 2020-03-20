#include <stdio.h>

//全局函数 在项目的所有文件中都可以使用 生命周期是从程序创建到销毁、
void func3()
{
	printf("%s\n", "hello world!");
}

//静态函数 只能在本文件中调用 生命周期是从程序创建到销毁
//同一个项目的不同文件 静态函数可以名字相同
static void func2()
{
	printf("%s\n", "hello world2!");
}

int main()
{
	func3();
	func2();
	return 0;
}