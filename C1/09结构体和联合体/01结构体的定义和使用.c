#define _CRT_SECURE_NO_WARNINGS  //����������󾯸�
#include <stdio.h>
#include <string.h>

//����һ���ṹ��
struct Student
{
	int no;
	char name[10];
	char sex[2];
	float score;
};

//����ṹ���ʱ����д����͸�ֵ
struct Student2
{
	int no;
	char name[10];
	char sex[2];
	float score;
} stu4 = { 1002,"123","��",20 };

//�����ṹ��һ�㲻����ʹ��
struct
{
	int no;
	char name[10];
	char sex[2];
	float score;
}stuuu = { 1002,"123","��",20 };


int main01()
{
	//����һ���ṹ��
	struct Student stu1;
	stu1.no = 1001;
	//stu1.name = "����";  ��ֵ���� stu1.name��ʾ��ַ�޷������ַ�����ֵ����
	strcpy(stu1.name, "����");//����ʹ���ַ����������и�ֵ
	//stu1.name = '��';
	strcpy(stu1.sex, "��");
	stu1.score = 80;

	//��һ�ָ�ֵ��ʽ
	struct Student stu2 = { 1002,"����","Ů",89 };

	printf("%d\n", stu2.no);
	printf("%s\n", stu2.name);
	printf("%s\n", stu2.sex);
	printf("%.2f\n", stu2.score);
	return 0;
}      

int main() 
{
	struct Student stu0;
	scanf("%d%s%s%f", &stu0.no, stu0.name, stu0.sex, &stu0.score);//�ǵ�ַ����Ҫ��&
	printf("%d\n", stu0.no);
	printf("%s\n", stu0.name);
	printf("%s\n", stu0.sex);
	printf("%.2f\n", stu0.score);

	//����
	struct Student stud[3] = {
		{1002,"����","Ů",89},
		{1002,"����","Ů",89},
		{1002,"����","Ů",89}
	};
	return 0;
}
//test git push