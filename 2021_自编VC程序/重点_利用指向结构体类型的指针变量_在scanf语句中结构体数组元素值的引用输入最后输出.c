#include<stdio.h>
struct student
	{
	int num;
	char name[20];
	float score;
	};
int main()
	{
	struct student stu[5];
	struct student *p;
	printf("请输入结构体类型数组每个元素的值!\n");
	for(p=stu;p<(stu+5);p++)
		scanf("%d%s%f",&p->num,p->name,&p->score);
	//用sanf语句结合指针变量进行输入结构体类型数组的元素值时参数为:&p->name这种形式
	printf("利用指向结构体类型的指针变量,将结构体变量包含的每个成员顺序输出!\n");
	for(p=stu;p<(stu+5);p++)
		printf("%d %s %0.2f\n",(*p).num,(*p).name,(*p).score);
	//等价于:printf("%d%s%f\n",p->num,p->name,p->score);
	return 0;
	}

