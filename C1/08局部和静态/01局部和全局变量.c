#include <stdio.h>

//全局变量
int a = 20;//在本文档中生效  要在同一个项目的其他文件使用需要提前声明 extern int a
int main01()
{
	//局部变量 用auto修饰  一般auto可以省略
	auto int a = 10;

	//就近原则
	printf("%d\n", a);

	//匿名函数 函数执行结束后销毁
	{
		int a = 30;
		printf("%d\n", a);
	}

	return 0;
}