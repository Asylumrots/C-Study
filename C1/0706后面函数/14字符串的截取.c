#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

int main14()
{
	char arr[] = "www.zhang.com";
	char c[] = ".";//�˲�������Ϊ�ַ���
	//
	//�ָ��Լ�\0�ƻ��ַ�����  �� �˴� arrΪ www\0zhang.com
	char *p = strtok(arr, c);
	printf("%s\n", p);//���www


	//�ָ��Լ�\0�ƻ��ַ�����  �� �˴� arrΪ www\0zhang\0com
	p = strtok(NULL, c);
	printf("%s\n", p);//���zhang

	p = strtok(NULL, c);
	printf("%s\n", p);//���com

	return 0;
}

int main1402()
{
	char arr[] = "�ҿ�\n�������\n���ԵĶԶĵ�\n��ʿ���ʿ���";
	char str[100] = { 0 };

	//�ַ����Ŀ��� �˴����������ڷָ���ƻ�ԭ���ַ��� ����һ�ݷָ�ݵĲ��ƻ�ԭ����
	strcpy(str, arr);

	char c[] = "\n";
	char *p;
	//��ȡ��һ���ַ���
	p = strtok(str, c);

	while (*p!=NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, c);
	}

	return 0;
}