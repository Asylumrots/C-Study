#include <stdio.h>

void copystring(char arr1[], char arr2[])
{
	int i;
	for (i = 0; arr1[i] != '\0'; i++)
	{
		arr2[i] = arr1[i];
	}
	arr2[i] = 0;
	return;
}

void copystring2(char* arr1, char* arr2)
{
	while (*arr1)  //�������һ��Ϊ0 ��Ϊfalse
	{
		*arr2 = *arr1;
		arr1++; //ָ��ÿ��1 ��ָ���������һ��Ԫ��  
		arr2++;
	}
	*arr2 = 0;
	return;
}

int main08()
{
	//�ַ����Ŀ�������
	char arr1[] = "helloworld";
	char arr2[100];

	copystring(arr1, arr2);

	printf("%s\n", arr2);

	return 0;
}

int main0802()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int *p = arr;
	p = &arr[3]; // 4
	p--;//ָ��ļӼ������ָ�������й�  p--��ָ���������һ��Ԫ�أ�ָ�������������ͬʱ��
	printf("%d\n", *p);// 3

	int s = p - arr; //�ڴ��ַƫ��4λ����һ��int�� 3 ��ַƫ��4�� �� 2

	printf("%d\n", s); //2

	printf("%d\n", p[-2]); // �˴�ָ�������±�����Ϊ���� p[-2]��ͬ�� *(p-2) 

	//int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	//char *p2 = arr2;
	//p2 = &arr2[3]; // 4
	//p2--;//ָ��ļӼ������ָ�������й�  p--��ָ���������һ��Ԫ�أ�ָ�������������ͬʱ��
	//printf("%d\n", *p2);

	return 0;
}

int main0803()
{
	//ָ������� -- ++ > < = && ||

	return 0;
}