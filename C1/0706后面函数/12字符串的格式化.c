#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
//注意这两个都是基于标准输入输出库的

int main12()
{
	//格式化输出
	char arr[100];

	sprintf(arr, "pi的值是%.2f", 3.1415926);

	printf("%s\n", arr);

	return 0;
}

int main1202()
{
	//格式化输入
	char arr[]="1+2=我不知道";
	int a, b;
	char str[100];

	sscanf(arr, "%d+%d=%s", &a, &b, str);

	printf("%d\n%d\n%s\n", a, b, str);


	char arr2[] = "123456";
	int c, d;
	//sscanf(arr2, "%d%d", &c, &d);//这样写由于arr2是一整个整形无法区分导致d无法正常赋值
	sscanf(arr2, "%3d%d", &c, &d);
	printf("%d\n%d", c, d);

	return 0;
}