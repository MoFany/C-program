#include<stdio.h>
#include<stdlib.h>//�����ڴ�Ķ�̬���亯��ͷ�ļ�
//#include<malloc.h>
#define LEN sizeof(struct student)//�궨��һ����������ֵΪ���ֽ������sizeof��ֵ
struct student
	{
	int num;
	char name[20];
	float score;
	struct student *next;//ָ����:ָ�����nextָ����һ������������;��һ������ָ����ָ����һ���������� 
	};
int n;//����һ��ȫ�ֱ���n
struct student *creat(viod)//����һ������ֵΪstruct student���͵�ָ�뺯��
	{
	struct student *head;//����ͷָ��head
	struct student *p1,*p2;//��������ָ��struct student���͵�ָ�����
	n=0;
	printf("sizeof��ṹ������struct student���ֽڳ���:%d�ֽ�!\n",sizeof(struct student));
	printf("����ѧ��ѧ���������ɼ�!\n");
	p1=p2=(struct student *)malloc(LEN);//��ʼʱΪָ�����p1��p2����ͬһ�洢��Ԫ�����ڶ�̬�����ڴ浥Ԫ
	scanf("%d%s%f",&p1->num,p1->name,&p1->score);
	head=NULL;
	while(p1->num!=0)//���ָ��struct student���͵�ָ�����p1ָ��Ľṹ���Աnum�ĵ�ǰֵ��Ϊ0ʱ,����ִ�е���ѭ��;����p1->num==0ʱ����ѭ��,����Ϊ0ʱ����
		{
		n=n+1;
		if(n==1)
			head=p1;//ͷָ��ָ��ָ�����p1�ĵ�ǰֵ��ָ�������ֵ�ǵ�ַ
		else 
			p2->next=p1;//ָ�����p1ָ��ָ�����p2��ָ���ָ����
		p2=p1;//ָ�����p2ָ��ָ�����p1��ǰ�ĵ�ַ
		p1=(struct student *)malloc(LEN);//Ϊָ��p1�����µ��ڴ浥Ԫ
		scanf("%d%s%f",&p1->num,p1->name,&p1->score);//&pt->num�ȼ���&(*pt).num
		}
	p2->next=NULL;//β����ָ����ָ��λNULL(��)
	return(head);//���ص�ǰͷ���ĵ�ַ��Ϊ����ֵ
	}
int main()
	{
	struct student *pt;//����һ��ָ��ṹ��struct student���͵�ָ�����
	pt=creat();//��������
	printf("\nѧ��:%d\n����:%s\n�ɼ�:%0.2f\n",pt->num,pt->name,pt->score);//pt->num�ȼ���(*pt).num
	return 0;
	}