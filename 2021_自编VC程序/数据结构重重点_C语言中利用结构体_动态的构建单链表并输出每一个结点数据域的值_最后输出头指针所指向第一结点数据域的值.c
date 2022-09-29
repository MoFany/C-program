#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
//#define LLST sizeof(struct link_list)
struct link_list
	{
	char data;
	struct link_list *next;
	};

int main()
	{
	extern struct link_list *creat(void);
	struct link_list *head;
	head=creat();
	printf("头指针head所指向的第一个结点的值为:%2c\n",head->data);
	return 0;
	}

struct link_list *creat(void)
	{
	extern void print(struct link_list *head);
	struct link_list *head,*p1,*p2;
	int n=0;
	printf("输入动态建立的单链表每个结点的值!\n");
	p1=p2=(struct link_list *)malloc(sizeof(struct link_list));
	scanf("%c",&p1->data);
	head=NULL;
	while(p1->data!='0')
		{
		n++;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct link_list *)malloc(sizeof(struct link_list));
		scanf("%c",&p1->data);
		}
	p2->next=NULL;
	print(head);
	return(head);
	}

void print(struct link_list *head)
	{
	struct link_list *p;
	p=head;
	printf("输出单链表每个结点的值!\n");
	if(head!=NULL)
		do
		{
			printf("%c",p->data);
			p=p->next;
		}while(p!=NULL);
	}
