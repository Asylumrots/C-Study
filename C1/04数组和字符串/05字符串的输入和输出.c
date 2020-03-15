#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

int main0501()
{
	char arr[10];
	scanf("%9s", arr); //可以在此处限制字符串的输入以保证最后一个字符是0;
	printf("%s", arr);
	return 0;
}

int main0502()
{
	char arr[10];
	//和scanf相同点：同样通过键盘获取用户输入而且溢出报错
	//不同：可以接收空格 即可以保存空格 scanf也可以通过正则表达式来限制以接收空格 scanf("%[^\n]",arr)
	gets(arr);
	
	fgets(arr, sizeof(arr), stdin);//函数即 接收字符串 接收大小(输入10即9自动保留最后以) 文件输入指针
	//获取字符串小于元素 即会自动\n 大于或等于就没有 其他和gets相同

	printf("%s", arr);
	return 0;
}

int main0503()
{
	char arr[]="hello world";

	//和printf相同：遇到\0停止
	//不同：puts自带换行
	puts(arr);

	fputs(arr, stdout);//函数即 接收字符串 文件输出指针  注意这给个不会自动换行和printf("%s",arr)相同

	return 0;
}