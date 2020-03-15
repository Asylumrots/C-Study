#include <stdio.h>

int add(int num1, int num2);
int add(int, int);//这样也行规定类型就行
void p()
{
	printf("he");
	exit(0);//直接退出函数  参数为错误代码
	return;//遇到return停止 
	printf("he");
}

//一般自定义函数要在main上方先声明在使用 也可以在下方但是要先声明
//可以多次声明和使用  但是只能定义一次
int main0202()
{
	int a = 10, b = 20;
	printf("%d", add(a, b));
	p();
	return 0;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

