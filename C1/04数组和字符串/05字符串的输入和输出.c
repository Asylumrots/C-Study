#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>

int main0501()
{
	char arr[10];
	scanf("%9s", arr); //�����ڴ˴������ַ����������Ա�֤���һ���ַ���0;
	printf("%s", arr);
	return 0;
}

int main0502()
{
	char arr[10];
	//��scanf��ͬ�㣺ͬ��ͨ�����̻�ȡ�û���������������
	//��ͬ�����Խ��տո� �����Ա���ո� scanfҲ����ͨ��������ʽ�������Խ��տո� scanf("%[^\n]",arr)
	gets(arr);
	
	fgets(arr, sizeof(arr), stdin);//������ �����ַ��� ���մ�С(����10��9�Զ����������) �ļ�����ָ��
	//��ȡ�ַ���С��Ԫ�� �����Զ�\n ���ڻ���ھ�û�� ������gets��ͬ

	printf("%s", arr);
	return 0;
}

int main0503()
{
	char arr[]="hello world";

	//��printf��ͬ������\0ֹͣ
	//��ͬ��puts�Դ�����
	puts(arr);

	fputs(arr, stdout);//������ �����ַ��� �ļ����ָ��  ע������������Զ����к�printf("%s",arr)��ͬ

	return 0;
}