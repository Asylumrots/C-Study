#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main0401()
{
	//�ַ�����
	char arr[5] = { 'h','e','l','l','o' };

	//�ַ���  �ַ����Ľ�����־Ϊ\0  ����0��ͬ��\0 ������ͬ��'0'
	char *str = "hello";

	for (int i = 0; i < 5; i++)
	{
		printf("%c", arr[i]);
	}
	printf("%s", str);

	return 0;
}

int main0402()
{
	//�ַ���������
	char arr[10];

	scanf("%s", arr);  //���ﲻ��& ����Ϊarr�����Ϊ��ֵַ arr[0]�Ͳ���
	//����ʱ�ӿո��Զ��ضϺ��治��ֵ
	//����Ϊ10ʱֻ������9�� ��Ϊ�ַ������һ������Ϊ\0 �� 0 ���򱨴�
	printf("%s", arr); 

	return 0;
}


int main0403()
{
	//�ַ�����ƴ��
	char arr1[] = "hello";
	char arr2[] = "world";//�˴�������6�� ���һ��Ϊ\0

	char arr3[20];

	int i = 0;
	int j = 0;
	while (arr1[i]!='\0')
	{
		arr3[i] = arr1[i];
		i++;
	}
	while (arr2[j] != '\0')
	{
		arr3[i+j] = arr2[j];
		j++;
	}

	//һ��Ҫ��\0 �ַ�����\0��β
	arr3[i + j] = '\0';

	printf("%s", arr3);

	return 0;
}