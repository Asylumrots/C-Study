#include <stdio.h>

int main03()
{
	int a = 123;
	//��������λa��� �Ҷ���
	//int i = 6;
	printf("===%5d===\n",a);
	//��������λa��� �����
	printf("===%-5d===\n",a);
	//������
	printf("===%ld===\n", a);
	//��������λa��� �Ҷ��� �����λ��0
	printf("===%05d===\n", a);
	float b = 123.456789;
	printf("===%5.2f===\n", b);  //7Ϊ����λ�� .2Ϊ����С�����λ %fΪ��������� (��-Ϊ����� û������ΪĬ���Ҷ���)
	return 0;
}

int main031()
{
	//ʹ��putchar����ַ�
	char a = 'a';
	printf("%c", a);//�ȼ�
	putchar(a);//�ȼ�

	putchar('\n'); //  \nֻռһ���ַ� ����\0
	putchar(97);  //asii�� Ĭ�ϲ��������� �����ַ��Զ�ת��
	return 0;
}