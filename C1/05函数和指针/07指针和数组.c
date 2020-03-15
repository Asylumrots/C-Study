#include <stdio.h>

int main07()
{
	//数组arr 是一个常量(即地址)不予许赋值 数组名是数组首个元素的地址 此处即为1的地址
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p;
	p = arr;//此处p和arr都是地址可以赋值

	printf("%d\n", p);
	printf("%d\n", arr);

	for (int i = 0; i < 10; i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", *arr); 
		//*arr arr为首个元素地址即1 等同于arr[0]
		//printf("%d\n", *(arr+1));
		//*(arr+1) 等同于 arr[1]  
		printf("%d\n", *(arr + i)); //指针变量+1 等同于内存地址+sizeof(int)
		
		//printf("%d\n", p[i]);
		printf("%d\n", *p);
		p++;
	}

	return 0;
}