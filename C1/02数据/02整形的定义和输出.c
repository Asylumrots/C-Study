#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main1()
{
	//�з��� signed �޷��� unsigned
	//%u ��ʾ���һ���޷��ŵ�ʮ��������
	unsigned int a = 10;
	printf("%u\n", a);
	return 0;
}

int main2()
{
	//����һ���˽��ƣ�0-7��ʾ��������0��ͷ
	int a = 0123;
	printf("%o\n", a);

	//����һ��ʮ�����ƣ�0-9 a-b(A-B)����0x��ͷ
	int b = 0x123;
	printf("%x\n", b);//%X

	//������ֱ�Ӷ������������
	return 0;
}

int main4()
{
	int a;
	//scanf��ʾ�������� &����� ��ʾȡ��ַ�����	
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;
}