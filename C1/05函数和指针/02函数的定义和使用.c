#include <stdio.h>

int add(int num1, int num2);
int add(int, int);//����Ҳ�й涨���;���
void p()
{
	printf("he");
	exit(0);//ֱ���˳�����  ����Ϊ�������
	return;//����returnֹͣ 
	printf("he");
}

//һ���Զ��庯��Ҫ��main�Ϸ���������ʹ�� Ҳ�������·�����Ҫ������
//���Զ��������ʹ��  ����ֻ�ܶ���һ��
int main0202()
{
	int a = 10, b = 20;
	printf("%d", add(a, b));
	p();
	return 0;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

