#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

int main10()
{
	char arr1[100] = "hello"; //ƴ�ӵ���Ҫ�ռ��㹻�����������
	char arr2[] = "world";
	//����1 ƴ�ӵ��ַ��� 2 ��ƴ�ӵ��ַ��� 
	//\0Ҳ�ᱻƴ�ӹ�ȥ
	strcat(arr1, arr2);
	printf("%s\n", arr1);


	char arr3[100] = "hello"; //ƴ�ӵ���Ҫ�ռ��㹻�����������
	char arr4[] = "world";
	//����1 ƴ�ӵ��ַ��� 2 ��ƴ�ӵ��ַ��� 
	//\0Ҳ�ᱻƴ�ӹ�ȥ
	strncat(arr3, arr4, 4);
	printf("%s\n", arr3);


	return 0;
}