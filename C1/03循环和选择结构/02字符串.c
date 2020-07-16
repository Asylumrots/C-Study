#include <stdio.h>

int main02()
{
	//字符串是内存中一段连续的char，以'\0'结尾
	//char a[11] 不够没用\0会乱码	
	char a[] = "hello world";
	char b[] = "hello \0 world";
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b)); //4
	//%s表示输出一个字符串 到\0停止
	printf("%s\n", a);
	printf("%s\n", b);
	return 0;
}