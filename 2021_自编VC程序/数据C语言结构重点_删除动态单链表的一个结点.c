#include<stdio.h>
#include<stdlib.h>
struct link_list//����һ���ṹ������:struct link_list 
	{
		char data;
		struct link_list *next;
	};
struct link_list *head;
struct link_list *p1,*p2;//ȫ��ָ�����
int main()
	{	
		extern void print(struct link_list *head,char c);
		int n=0;
		char ch;
		printf("��������Ҫɾ���Ľ��:");
		scanf("%c",&ch);
		printf("����Data������ֵ,������̬������!\n");
		p1=p2=(struct link_list *)malloc(sizeof(struct link_list));//ָ��ṹ�����͵�ָ�����p1,p2���ٶ�̬�ڴ�ռ�,��ʼʱp1,p2��ָͬ��ͬһ�洢��Ԫ��ַ
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
	printf("���!ɾ�����������������ÿ�����Data���ֵ!\n");
	if(head!=NULL)
		do
			{
				if(p->data!=c)
						printf("%c",p->data);
				else
					if(p->data==c)
							p->next=p->next->next;//ͨ���ı�ĳһ�����ָ�����ָ�򣬽����ı�������̬�������ֵ
				p=p->next;
			}while(p!=NULL);
	}