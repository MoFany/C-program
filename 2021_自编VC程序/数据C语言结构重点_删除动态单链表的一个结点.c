#include<stdio.h>
#include<stdlib.h>
struct link_list//定义一个结构体类型:struct link_list 
	{
		char data;
		struct link_list *next;
	};
struct link_list *head;
struct link_list *p1,*p2;//全局指针变量
int main()
	{	
		extern void print(struct link_list *head,char c);
		int n=0;
		char ch;
		printf("请输入需要删除的结点:");
		scanf("%c",&ch);
		printf("请向Data域输入值,建立动态单链表!\n");
		p1=p2=(struct link_list *)malloc(sizeof(struct link_list));//指向结构体类型的指针变量p1,p2开辟动态内存空间,初始时p1,p2共同指向同一存储单元地址
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
		p1->next=NULL;
		print(head,ch);
		return 0;
	}
void print(struct link_list *head,char c)
	{
	struct link_list *p;
	p=head;
	printf("输出!删除操作结束后的链表每个结点Data域的值!\n");
	if(head!=NULL)
		do
			{
				if(p->data!=c)
						printf("%c",p->data);
				else
					if(p->data==c)
							p->next=p->next->next;//通过改变某一个结点指针域的指向，进而改变整个动态单链表的值
				p=p->next;
			}while(p!=NULL);
	}