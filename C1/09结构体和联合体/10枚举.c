#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

//��һ��ö�ٳ�Ա��Ĭ��ֵΪ���͵� 0��
//����ö�ٳ�Ա��ֵ��ǰһ����Ա�ϼ� 1�����������ʵ���аѵ�һ��ö�ٳ�Ա��ֵ����Ϊ 1���ڶ�����Ϊ 2���Դ�����
enum Color
{
	red=1,
	bule,//2
	green,//3
	black=10,
	white,//11
	orange//12
};
//û��ָ��ֵ��ö��Ԫ�أ���ֵΪǰһԪ�ؼ� 1

int main10()
{
	enum Color color = bule;

	printf("%d\n", color);
	//ʹ��for������ö�ٲ���ȡ ��Ĭ�ϵ�ʱ������������� ��;�ı丳ֵ������
	enum Color like;
	printf("��ѡ����ϲ������ɫ:");
	scanf("%d", &like);
	switch (like)
	{
	case red:
		printf("��ɫ");
		break;
	case bule:
		printf("��ɫ");
		break;
	case green:
		printf("��ɫ");
		break;
	default:
		printf("û�д���ɫ");
		break;
	}

	return 0;
}

int main1002()
{
	int a = 1;
	enum Color c;
	c = (enum Color)a;
	printf("%d\n", c);//1

	return 0;
}

int main1003()
{
	printf("%d", sizeof(enum  Color));//4  �洢һ���޷��ŵ�int����
	return 0;
}