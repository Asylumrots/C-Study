#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main03()
{
	int a = 10;
	//����һ��������
	short b = 20;
	//%hd���������
	printf("%hd\n", b);

	//����һ��������
	long c = 30;
	//%ld���������
	printf("%ld\n", c);

	//����һ����������
	long long d = 40;
	//%lld�����������
	printf("%lld\n", d);


	//sizeof��ʾ���������������ڴ���ռ�õ��ֽ�(byte)��С
	//1b=8bit
	//sizeof(��������) sizeof(������)
	unsigned int s = sizeof(b);
	printf("%d", s);

	return 0;
}