#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[] = "  123我拷贝";

	//atoi 首先需要引用stdlib.h头文件
	//忽略空格从正负号开始查找数字 到不是数字或\0停止 
	//数字前有别的则停止 返回0 即错误 " asd 123我拷贝"
	int n = atoi(arr);
	printf("%d\n", n); 

	char arr2[] = " 123.234我是12322.223";
	float f = atof(arr2);
	printf("%f\n", f);

	double d = atof(arr2);
	printf("%lf\n", d);


	return 0;
}