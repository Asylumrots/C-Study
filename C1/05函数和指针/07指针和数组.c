#include <stdio.h>

int main07()
{
	//����arr ��һ������(����ַ)������ֵ �������������׸�Ԫ�صĵ�ַ �˴���Ϊ1�ĵ�ַ
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p;
	p = arr;//�˴�p��arr���ǵ�ַ���Ը�ֵ

	printf("%d\n", p);
	printf("%d\n", arr);

	for (int i = 0; i < 10; i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", *arr); 
		//*arr arrΪ�׸�Ԫ�ص�ַ��1 ��ͬ��arr[0]
		//printf("%d\n", *(arr+1));
		//*(arr+1) ��ͬ�� arr[1]  
		printf("%d\n", *(arr + i)); //ָ�����+1 ��ͬ���ڴ��ַ+sizeof(int)
		
		//printf("%d\n", p[i]);
		printf("%d\n", *p);
		p++;
	}

	return 0;
}