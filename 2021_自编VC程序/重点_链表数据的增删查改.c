#include <stdio.h>
#include <stdlib.h>

struct Student
	{                       
		int num;
		float score;
		struct Student *prev;
		struct Student *next;
	};//声明结构体（双向链表结构体）

struct Student *input();//声明输入函数
struct Student *insert(struct Student **stu, int m, char direc, struct Student *ins);//声明插入函数
void print(struct Student *stu);//声明输出函数

int main()
	{
		struct Student *stud, in, *inser; //定义结构体指针，插入的结构体变量，指向插入结构体变量的指针
		int insert_num;                   //定义要插入的结点学号
		char dir;                         //定义前插后插的方向变量
		stud=input();                     //调用输入函数
		print(stud);                      //输出全部数据
		printf("Please enter insert student info: ");      //输入要插入的学生数据（学号和成绩）
		scanf("%d %f", &in.num, &in.score);
		getchar();
		inser=&in;                        //结构体变量指针指向in
		printf("Please enter insert num: ");               //输入要插入哪个学号
		scanf("%d", &insert_num);
		getchar();
		printf("Please enter F or B: ");                   //输入是要插入学号前还是后，F是前插，B是后插。
		scanf("%c", &dir);
		getchar();
		stud=insert(&stud, insert_num, dir, inser);             //调用插入函数，并把返回值head赋值给stud 
		print(stud);
		return 0;
	}

struct Student *input()//输入函数
	{
	struct Student *p1, *p2, *head;
	int n=0;
	p1=p2=(struct Student*)malloc(sizeof(struct Student));
	printf("Please enter No.%d student info: ", n+1);
	scanf("%d %f", &p1->num, &p1->score);
	getchar();
	head=NULL;
	while (p1->num!=0)
		{
		 n++;
		 if (n==1)
			{
				head=p1;
				p1->prev=NULL;
			}
		 else
			{
				p2->next=p1;
				p1->prev=p2;
			}
		 p2=p1;
		 p1=(struct Student*)malloc(sizeof(struct Student));
		 printf("Please enter No.%d student info: ",n+1);
		 scanf("%d %f", &p1->num, &p1->score);
		 getchar();
		}
	p2->next=NULL;
	return head;
	}

struct Student *insert(struct Student **stu, int m, char direc, struct Student *ins)//插入函数
	{
	struct Student *p, *head;
	for(p=*stu,head=p;p!=NULL;p=p->next)
		{
		if (p->num==m)
			{
			if (direc=='F')
				{
				if (p==head)//若为第一个结构体数组 
					{
					ins->next=p;
					ins->prev=NULL;
					head->prev=ins;
					head=ins;
					}
				else
					{
					ins->prev=p->prev;
					p->prev->next=ins;
					ins->next=p;
					p->prev=ins;
					}
				}
			else 
				if (direc=='B')
				{
				if (p->next==NULL)//若为最后一个结构体数组 
					{
					p->next=ins;
					ins->next=NULL;
					ins->prev=p;
					}
				else
					{
					ins->next=p->next;
					p->next=ins;
					ins->prev=p;
					}
				}
			}
		}
	return head;//返回值为head 
	}

void print(struct Student *stu)//输出函数
	{
	struct Student *p;
	printf("Output Result:\n");
	for(p=stu;p!=NULL;p=p->next)
		{
			printf("%d %.2f\n",p->num,p->score);
		}
	}
