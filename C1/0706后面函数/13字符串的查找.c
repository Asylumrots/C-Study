#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

int main13()
{
	char arr1[] = "helloworld";
	char arr2 = 'l';
	// �ڲ��� str ��ָ����ַ�����������һ�γ����ַ� c��һ���޷����ַ�����λ�á�δ�ҵ�����NULL
	//�����ַ���һ�γ��ֵ�λ�� ���غ����ֵ�������ҵĵ�һ���� 
	char *arr3 = strchr(arr1, arr2);
	//�˴����loworld
	printf("%s\n", arr3);


	char arr4 = 'l';
	//�ڲ��� str ��ָ����ַ������������һ�γ����ַ� c��һ���޷����ַ�����λ��  δ�ҵ�����NULL
	char *arr5 = strrchr(arr1, arr4);
	//���ld
	printf("%s\n", arr5);


	//C �⺯�� char *strstr(const char *haystack, const char *needle) 
	//���ַ��� haystack �в��ҵ�һ�γ����ַ��� needle ��λ�ã���������ֹ�� '\0'��
	char arr6[] = "hello world";
	char arr7[] = "wor";
	char *arr8 = strstr(arr6,arr7);
	//���world
	printf("%s\n", arr8);

	return 0;
}