#include <stdio.h>
#define user1 100
//typedef ���ɱ�����ִ�н��͵ģ�#define �������Ԥ���������д����

//Ϊ�Ѿ����ڵ�������������� ����������ʹ��
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