#include <stdio.h>
#define user1 100
//typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的

//为已经存在的数据类型起别名 方便声明和使用
typedef unsigned int ui;

typedef struct Mys
{
	int a;
	int b;
}str1;

int main()
{
	ui a = 10;
	printf("%d\n", a);
	str1 ss;
	ss.a = 19;
	printf("%d\n", user1);
	
	return 0;
}