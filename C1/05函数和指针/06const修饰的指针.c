#include <stdio.h>

int main0601()
{
	//通过const修饰的变量称之为常量
	//这样的常量不安全可以通过指针间接修改 //defind 宏定义的不可以被修改
	const int a = 10;
	int* p = &a;
	*p = 100;
	printf("%d\n", *p);

	//const修饰指针      即：谁在const的右边(离的近)即被const修饰

	const int* p1 = &a;
	//可以修改指针变量的值 
	p1 = 100;
	//不可以修改指针指向的内存空间的值
	//*p1=100;

	int* const p2 = &a;
	//可以修改指针指向的内存空间的值
	*p2 = 100;
	//不可以修改指针变量的值
	//p2 = 100;

	return 0;
}

int main0602()
{
	int a = 10;
	//这种两个都修饰都不可以改变 但是可以通过二级指针来修改一级指针的值
	const int* const p=&a;

	return 0;
}