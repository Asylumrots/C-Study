#include <stdio.h>

int main03()
{
	int a = 10;
	//定义指针变量存储变量地址 定义格式：数据类型* 
	int* p;
	p = &a;
	printf("%d\n", &a);
	printf("%d\n", p);

	//修改变量值的方式
	//1.a=100  通过变量a来修改值
	//2.*p=100  通过指针来间接修改变量的值
	*p = 100;
	printf("%d\n", a);

	//* 取值运算符 *指针变量
	//& 取地址运算符 &变量

	//所有的指针类型存储的都是内存地址，内存地址都是一个无符号十六进制的整型 占4个字节 
	//注：在32位系统中(debugx86)内存地址(指针类型)占4个字节 在64位系统(debugx64)中内存地址占8个字节
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(int*));//4
	printf("%d\n", sizeof(float*));//4

	return 0;
}