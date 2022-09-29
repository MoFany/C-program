#include<stdio.h>
#include<stdlib.h>
struct link_list
	{
	char data;
	struct link_list *next;
	};
struct link_list *creat(void)
	{
	struct link_list *head,*p1,*p2;
	int n=0;
	printf("输入动态单链表每个结点的值!\n");
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
	return(head);
	}
int main()
	{
	struct link_list *creat(void);
	struct link_list *p;
	p=creat();
	printf("头指针指向的结点值:%c\n",p->data);
	return 0;
	}