#include <stdio.h>

//由于返回的是arr 即数组地址 所以返回值类型 需要写字符类型的指针而不是 字符类型
char* remove_space(char* ch)//此处为 *ch 还是 ch[]区别不大  至少ch依然代表数组地址
{
	//1.注意这里字符数组没有赋值的时候空位默认不为0 在赋值之后空位才默认为0
	//char arr[100] = {'1','2'};
	static char arr[100];//此处需要加static 防止在函数结束后销毁arr 导致地址消失
	int j = 0;
	for (int i = 0; ch[i]!='\0'; i++)
	{
		if (ch[i]!=' ')
		{
			arr[j] = ch[i];
			j++;
		}
	}
	//2.此处在字符数组赋值之后可以不加 但是字符数组只是初始化没有赋值的时候一定要加  一般默认就加吧总没错
	arr[j] = '\0';
	//此处返回的是arr 但是返回值为地址 -----arr本就是地址
	return arr;//返回字符数组是arr  而不是arr[100] 这个带下标的表示第100个元素
}


int main()
{
	char ch[] = "he  l lo wor  l  d";
	//printf("%p\n", remove_space(ch)[2]);
	char* p;
	p = remove_space(ch);//数组地址取值 *remove_space(ch) 由于数组地址只代表第一个元素地址 所以输出时需要循环
	//printf("%c", *p); 此处输出需要加* 不然输出一个为p
	//for (int i = 0; i < 100; i++)
	//{
	//	printf("%c", p[i]);//数组取值如此地址加下标
	//}
	printf("%s\n", p);

	return 0;
}