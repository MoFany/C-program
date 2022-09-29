#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
struct stu_tea//声明一个结构体类型:struct stu_tea
	{
		int num;
		char name[20];
		char sex[4];
		char job[8];
		union nature//在结构体类型中,声明共用体的同时定义了一个共用体变量:N
			{int clas;
			char position[20];}N;
		struct stu_tea *next;//指针域:定义了一个指向结构体类型的指针变量成员:next
	};
int main()
	{
		extern struct stu_tea *creat(void);//被调函数:stu_tea声明
		creat();//该函数返回值是一个struct stu_tea类型的指针
		return 0;
	}
struct stu_tea *creat(void)
	{
		extern void print(struct stu_tea *head);//被调函数:print声明
		struct stu_tea *head;
		struct stu_tea *p1,*p2;
		int n=0;
		printf("请输入师生信息,以该信息为基础建立动态单链表!\n");
		p1=p2=(struct stu_tea *)malloc(sizeof(struct stu_tea));
		scanf("%d%s%s%s",&p1->num,p1->name,p1->sex,p1->job);
		if(p1->job[0]=='s' || p1->job[0]=='S')
			{
			printf("输入学生班级:");
			scanf("%d",&p1->N.clas);
			}
		else	
			if(p1->job[0]=='t' || p1->job[0]=='T')
				{
				printf("输入教师职位:");
				scanf("%s",p1->N.position);
				}

		head=NULL;
		while(p1->num!=0)
		{
			n++;
			if(n==1)
				head=p1;//头指针指向第一个结点
			else
				p2->next=p1;//使指针变量p1指向的地址，赋值于指针变量p2所指向的next指针域
			p2=p1;
			p1=(struct stu_tea*)malloc(sizeof(struct stu_tea));
			scanf("%d%s%s%s",&p1->num,p1->name,p1->sex,p1->job);
			if(p1->job[0]=='s' || p1->job[0]=='S')
				{
				printf("输入学生班级:");
				scanf("%d",&p1->N.clas);
				}
			else
				if(p1->job[0]=='t' || p1->job[0]=='T')
					{
					printf("输入教师职位:");
					scanf("%s",p1->N.position);//结构体中定义的共用体变量以及成员的调用:p1->N.position
					}
		}
		p1->next=NULL;//使尾结点的指针域指向为:NULL(空)
		print(head);//调用print函数
		return(head);//以head地址作为函数stu_tea的返回值
	}
void print(struct stu_tea *head)
	{
	struct stu_tea *p;
	p=head;//(指向struct stu_tea类型的指针变量p)指向头指针head指向的值,将头指针head的值赋值于struct stu_tea类型的指针变量p
	printf("输出动态单链表每个结点的值!\n");
	if(head!=NULL)//判断头指针head当前的值(地址)是否为空:NULL
		do
		{
		if(p->job[0]=='t' || p->job[0]=='T')
			printf("%d%8s%4s%8s%8s\n",p->num,p->name,p->sex,p->job,p->N.position);
		else
			if(p->job[0]=='s' || p->job[0]=='S')
			printf("%d%8s%4s%8s%8d \n",p->num,p->name,p->sex,p->job,p->N.clas);
		p=p->next;//使前一个指针域next指向下一个结点
		}while(p!=NULL);//判断指向struct stu_tea类型的指针变量当前的值(地址)是否为空:NULL
	}
