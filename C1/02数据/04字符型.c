#include <stdio.h>

int main04()
{
	//字符型变量 占用1个字符
	char c = 'a';
	//%c表示输出字符型变量 
	printf("%c\n", c);
	//打印字母a的十进制数
	printf("%d\n", c);


	//转义字符
	// \a 警报
	// \b 退格，将当前位置移到前一列
	// \f 换页，将当前位置移到下页开头
	// \n 换行，将当前位置移到下一行开头
	// \r 回车，将当前位置移到本行开头
	// \t 水平制表
	// \v 垂直制表
	// \\打印一个\ %%打印一个%


	return 0;
}