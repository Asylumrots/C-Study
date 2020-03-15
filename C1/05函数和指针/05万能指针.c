#include <stdio.h>

int main05()
{
	int a = 10;

	//万能指针可以接收任意类型的内存地址 
	//例：int* 接收 char类型即 由于是int类型的指针会读取4个字节而char只占2个字节
	//所有指针类型是用来存储地址的字节大小都为4
	void* p = &a;
	//在通过万能指针修改读取变量的值时，需要找到变量对应的指针类型进行转换
	*(int*)p = 100;

	printf("%d\n", a);
	printf("%d\n", *(int*)p);

	return 0;
}