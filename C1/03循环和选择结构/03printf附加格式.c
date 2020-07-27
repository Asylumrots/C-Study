#include <stdio.h>

int main03()
{
	int a = 123;
	//输出五个空位a填充 右对齐
	//int i = 6;
	printf("===%5d===\n",a);
	//输出五个空位a填充 左对齐
	printf("===%-5d===\n",a);
	//长整数
	printf("===%ld===\n", a);
	//输出五个空位a填充 右对齐 其余空位补0
	printf("===%05d===\n", a);
	float b = 123.456789;
	printf("===%5.2f===\n", b);  //7为整体位数 .2为保留小数点后几位 %f为输出浮点型 (有-为左对齐 没有正常为默认右对齐)
	return 0;
}

int main031()
{
	//使用putchar输出字符
	char a = 'a';
	printf("%c", a);//等价
	putchar(a);//等价

	putchar('\n'); //  \n只占一个字符 类似\0
	putchar(97);  //asii码 默认参数是数字 填入字符自动转换
	return 0;
}