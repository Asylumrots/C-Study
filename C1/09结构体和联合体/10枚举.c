#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>

//第一个枚举成员的默认值为整型的 0，
//后续枚举成员的值在前一个成员上加 1。我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推
enum Color
{
	red=1,
	bule,//2
	green,//3
	black=10,
	white,//11
	orange//12
};
//没有指定值的枚举元素，其值为前一元素加 1

int main10()
{
	enum Color color = bule;

	printf("%d\n", color);
	//使用for来遍历枚举不可取 当默认的时候连贯可以正常 中途改变赋值即报错
	enum Color like;
	printf("请选择你喜欢的颜色:");
	scanf("%d", &like);
	switch (like)
	{
	case red:
		printf("红色");
		break;
	case bule:
		printf("蓝色");
		break;
	case green:
		printf("绿色");
		break;
	default:
		printf("没有此颜色");
		break;
	}

	return 0;
}

int main1002()
{
	int a = 1;
	enum Color c;
	c = (enum Color)a;
	printf("%d\n", c);//1

	return 0;
}

int main1003()
{
	printf("%d", sizeof(enum  Color));//4  存储一个无符号的int数字
	return 0;
}