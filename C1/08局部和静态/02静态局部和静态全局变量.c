#include <stdio.h>

void func1()
{
	//��̬�ֲ����� ��ʼ��һ�����ڴ���  ���Զ�θ�ֵʹ�� ���������󲻻�����
	static int b = 10;
	printf("%d\n", b);
	b++;
}

void func2()
{
	//�Ǿ�̬�ֲ�����  ��������������
	int b = 10;
	printf("%d\n", b);
	b++;
}

//��̬ȫ�ֱ���  �����ڱ��ĵ���ʹ�ò������������ĵ���ʹ�� ���ų���Ľ���������
static int b = 20;

int main02()
{
	static int a = 10;
	printf("%d\n", a);
	func1();
	func1();
	func2();
	func2();
	return 0;
}