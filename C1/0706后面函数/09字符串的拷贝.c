#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

int main09()
{
	char arr1[] = "hello world";
	char arr2[100];//��Ҫ��֤�˴����㹻�Ĵ�С���洢���ƹ������ַ��� ���������
	//����1 Ϊ�����ַ��� 2 �������ַ���
	strcpy(arr2, arr1);//�����ַ��� �滻ԭ�е����� ���Ҳ��´��\0
	printf("%s\n", arr2);


	char arr3[100] = {0};//��ʼ��
	strncpy(arr3, arr1, 4);//����1 Ϊ�����ַ��� 2 �������ַ��� 3 ��������(������ڵ���0) 
	//�ر�ע��˴� �����Ƿ������ָ�������Ƿ����\0	
	printf("%s\n", arr3);

	return 0;
}