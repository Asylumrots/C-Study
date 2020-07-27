#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main()
{
	int a, b;
	//scanf("%d%d", &a, &b);   //这样输入时两个数中间用空格或直接回车加以区分两个数

	//scanf("%d,%d", &a, &b);  //或者自定义分隔格式

	//scanf("%d\t%d", &a, &b);


	scanf("%3d%d", &a, &b); //规范数位不到继续 到了后面给b
	printf("%d===%d", a, b);

	a = getchar();//接收一个输入的char字符

	return 0;
}