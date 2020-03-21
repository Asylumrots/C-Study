#define _CRT_SECURE_NO_WARNINGS  //忽略输入错误警告
#include <stdio.h>
#include <string.h>

//定义一个结构体
struct Student
{
	int no;
	char name[10];
	char sex[2];
	float score;
};

//定义结构体的时候进行创建和赋值
struct Student2
{
	int no;
	char name[10];
	char sex[2];
	float score;
} stu4 = { 1002,"123","男",20 };

//匿名结构体一般不这样使用
struct
{
	int no;
	char name[10];
	char sex[2];
	float score;
}stuuu = { 1002,"123","男",20 };


int main01()
{
	//创建一个结构体
	struct Student stu1;
	stu1.no = 1001;
	//stu1.name = "张三";  赋值报错 stu1.name表示地址无法进行字符串赋值操作
	strcpy(stu1.name, "张三");//可以使用字符串拷贝进行赋值
	//stu1.name = '男';
	strcpy(stu1.sex, "男");
	stu1.score = 80;

	//另一种赋值方式
	struct Student stu2 = { 1002,"李四","女",89 };

	printf("%d\n", stu2.no);
	printf("%s\n", stu2.name);
	printf("%s\n", stu2.sex);
	printf("%.2f\n", stu2.score);
	return 0;
}      

int main() 
{
	struct Student stu0;
	scanf("%d%s%s%f", &stu0.no, stu0.name, stu0.sex, &stu0.score);//非地址的需要加&
	printf("%d\n", stu0.no);
	printf("%s\n", stu0.name);
	printf("%s\n", stu0.sex);
	printf("%.2f\n", stu0.score);

	//数组
	struct Student stud[3] = {
		{1002,"李四","女",89},
		{1002,"李四","女",89},
		{1002,"李四","女",89}
	};
	return 0;
}
//test git push