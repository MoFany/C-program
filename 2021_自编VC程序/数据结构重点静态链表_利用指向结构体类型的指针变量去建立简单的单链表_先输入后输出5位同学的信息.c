#include<stdio.h>
struct student
	{
	int num;
	char name[20];
	float score;
	struct student *next;//指针域:指针变量next指向下一个结点的数据域;上一个结点的指针域指向下一结点的数据域 
	};
int main()
	{
	struct student stu[5];
	struct student *head,*p,*p1;
	printf("请输入五个学生的信息!\n");
	for(p1=stu;p1<(stu+5);p1++)
		scanf("%d%s%f",&p1->num,p1->name,&p1->score);
	printf("输出所有学生的综合信息!\n");
	p1=stu;
	head=p1;//建立简单的单链表,头指针指向第一个节点的地址
	p1->next=p1+1;
	(p1+1)->next=p1+2;
	(p1+2)->next=p1+3;
	(p1+3)->next=p1+4;
	(p1+4)->next=NULL;//尾结点的指针域指向为:NULL
	p=head;//让指向结构体类型struct student的指针变量指向头指针
	do
		{
			printf("学号:%d\n姓名:%s\n成绩:%0.2f\n",p->num,p->name,p->score);
			p=p->next;//使指针变量p指向的指针域每次循环后指向下一个结点的数据域
		}while(p->next!=NULL);
	return 0;
	}