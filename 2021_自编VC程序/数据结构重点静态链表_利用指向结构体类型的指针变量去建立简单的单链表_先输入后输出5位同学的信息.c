#include<stdio.h>
struct student
	{
	int num;
	char name[20];
	float score;
	struct student *next;//ָ����:ָ�����nextָ����һ������������;��һ������ָ����ָ����һ���������� 
	};
int main()
	{
	struct student stu[5];
	struct student *head,*p,*p1;
	printf("���������ѧ������Ϣ!\n");
	for(p1=stu;p1<(stu+5);p1++)
		scanf("%d%s%f",&p1->num,p1->name,&p1->score);
	printf("�������ѧ�����ۺ���Ϣ!\n");
	p1=stu;
	head=p1;//�����򵥵ĵ�����,ͷָ��ָ���һ���ڵ�ĵ�ַ
	p1->next=p1+1;
	(p1+1)->next=p1+2;
	(p1+2)->next=p1+3;
	(p1+3)->next=p1+4;
	(p1+4)->next=NULL;//β����ָ����ָ��Ϊ:NULL
	p=head;//��ָ��ṹ������struct student��ָ�����ָ��ͷָ��
	do
		{
			printf("ѧ��:%d\n����:%s\n�ɼ�:%0.2f\n",p->num,p->name,p->score);
			p=p->next;//ʹָ�����pָ���ָ����ÿ��ѭ����ָ����һ������������
		}while(p->next!=NULL);
	return 0;
	}