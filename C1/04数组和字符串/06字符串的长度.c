#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

int main06()
{
	char arr[] = "hello world";
	printf("�ַ�����Ĵ�С%d\n", sizeof(arr));
	//��Ҫ���� #include <string.h>
	printf("�ַ�����ĳ���%d\n", strlen(arr));

	return 0;
}