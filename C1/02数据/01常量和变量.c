#include <stdio.h>

int main01()
{
	float f = 2.2;
	//float f = 2.2f;
	//标识符命名规则
	//1.不能使用系统关键子
	//2.只能由字母 数字 下划线组成	
	//3.不允许数字开头
	//4.标识符字母区分大小写

	printf("%.2f", f);//%f表示输出浮点型数据 默认保留小数点后6位 %.2f表示保留后几位
	return 0;
}