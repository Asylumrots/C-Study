#include <stdio.h>

//创建一个联合体 联合体的占用的字节大小为 最大变量的类型大小 此处为double 即为8
//联合体的数据都储存在同一内存中 并且只能存储一个值
union MyUnion
{
	int a;
	char b;
	float c;
	double d;
};

int main09()
{
	union MyUnion vars;
	vars.a = 100;
	vars.b = '11';

	printf("%d\n", vars.a);
	return 0;
}

int main0901()
{
	union MyUnion2
	{
		int a;
		float b;
		char c[6];
	};
	printf("%d", sizeof(union MyUnion2));//8  先判断最大的，然后判断是否能整除其他的
}