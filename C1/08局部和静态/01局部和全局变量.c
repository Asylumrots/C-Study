#include <stdio.h>

//ȫ�ֱ���
int a = 20;//�ڱ��ĵ�����Ч  Ҫ��ͬһ����Ŀ�������ļ�ʹ����Ҫ��ǰ���� extern int a
int main01()
{
	//�ֲ����� ��auto����  һ��auto����ʡ��
	auto int a = 10;

	//�ͽ�ԭ��
	printf("%d\n", a);

	//�������� ����ִ�н���������
	{
		int a = 30;
		printf("%d\n", a);
	}

	return 0;
}