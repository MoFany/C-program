#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
struct stu_tea//����һ���ṹ������:struct stu_tea
	{
		int num;
		char name[20];
		char sex[4];
		char job[8];
		union nature//�ڽṹ��������,�����������ͬʱ������һ�����������:N
			{int clas;
			char position[20];}N;
		struct stu_tea *next;//ָ����:������һ��ָ��ṹ�����͵�ָ�������Ա:next
	};
int main()
	{
		extern struct stu_tea *creat(void);//��������:stu_tea����
		creat();//�ú�������ֵ��һ��struct stu_tea���͵�ָ��
		return 0;
	}
struct stu_tea *creat(void)
	{
		extern void print(struct stu_tea *head);//��������:print����
		struct stu_tea *head;
		struct stu_tea *p1,*p2;
		int n=0;
		printf("������ʦ����Ϣ,�Ը���ϢΪ����������̬������!\n");
		p1=p2=(struct stu_tea *)malloc(sizeof(struct stu_tea));
		scanf("%d%s%s%s",&p1->num,p1->name,p1->sex,p1->job);
		if(p1->job[0]=='s' || p1->job[0]=='S')
			{
			printf("����ѧ���༶:");
			scanf("%d",&p1->N.clas);
			}
		else	
			if(p1->job[0]=='t' || p1->job[0]=='T')
				{
				printf("�����ʦְλ:");
				scanf("%s",p1->N.position);
				}

		head=NULL;
		while(p1->num!=0)
		{
			n++;
			if(n==1)
				head=p1;//ͷָ��ָ���һ�����
			else
				p2->next=p1;//ʹָ�����p1ָ��ĵ�ַ����ֵ��ָ�����p2��ָ���nextָ����
			p2=p1;
			p1=(struct stu_tea*)malloc(sizeof(struct stu_tea));
			scanf("%d%s%s%s",&p1->num,p1->name,p1->sex,p1->job);
			if(p1->job[0]=='s' || p1->job[0]=='S')
				{
				printf("����ѧ���༶:");
				scanf("%d",&p1->N.clas);
				}
			else
				if(p1->job[0]=='t' || p1->job[0]=='T')
					{
					printf("�����ʦְλ:");
					scanf("%s",p1->N.position);//�ṹ���ж���Ĺ���������Լ���Ա�ĵ���:p1->N.position
					}
		}
		p1->next=NULL;//ʹβ����ָ����ָ��Ϊ:NULL(��)
		print(head);//����print����
		return(head);//��head��ַ��Ϊ����stu_tea�ķ���ֵ
	}
void print(struct stu_tea *head)
	{
	struct stu_tea *p;
	p=head;//(ָ��struct stu_tea���͵�ָ�����p)ָ��ͷָ��headָ���ֵ,��ͷָ��head��ֵ��ֵ��struct stu_tea���͵�ָ�����p
	printf("�����̬������ÿ������ֵ!\n");
	if(head!=NULL)//�ж�ͷָ��head��ǰ��ֵ(��ַ)�Ƿ�Ϊ��:NULL
		do
		{
		if(p->job[0]=='t' || p->job[0]=='T')
			printf("%d%8s%4s%8s%8s\n",p->num,p->name,p->sex,p->job,p->N.position);
		else
			if(p->job[0]=='s' || p->job[0]=='S')
			printf("%d%8s%4s%8s%8d \n",p->num,p->name,p->sex,p->job,p->N.clas);
		p=p->next;//ʹǰһ��ָ����nextָ����һ�����
		}while(p!=NULL);//�ж�ָ��struct stu_tea���͵�ָ�������ǰ��ֵ(��ַ)�Ƿ�Ϊ��:NULL
	}
