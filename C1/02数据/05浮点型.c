#include <stdio.h>

int main()
{
	//定义浮点型
	float a = 3.14;
	double b = 3.14;

	//输出浮点型
	printf("%f\n", a);
	printf("%.2lf\n", b);


	//字节大小
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));


	//%p以无符号十六进制的数据查看内存中的地址
	printf("%p\n", &a);
	printf("%p\n", &b);

	printf("%d\n", sizeof(int));
	return 0;
}
