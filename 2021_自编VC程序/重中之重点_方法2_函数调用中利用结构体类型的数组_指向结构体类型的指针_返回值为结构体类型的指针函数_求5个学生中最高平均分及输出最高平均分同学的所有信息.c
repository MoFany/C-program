#include<stdio.h>
struct student
	{
	int num;
	char name[20];
	float score[3];
	};
struct student stu[5];
int main()
	{
	struct student *max_aver(struct student *p_stu);
	struct student *p,*p_m;
	printf("���������ѧ������Ϣ!\n");
	for(p=stu;p<(stu+5);p++)
		scanf("%d%s%f%f%f",&p->num,p->name,&p->score[0],&p->score[1],&p->score[2]);
	p_m=max_aver(p);
	printf("���ƽ���ɼ���ߵ�ѧ��������Ϣ!\n");
	printf("ѧ��:%d\n����:%s\n���Ƴɼ�:%0.2f %0.2f %0.2f\n",p_m->num,p_m->name,p_m->score[0],p_m->score[1],p_m->score[2]);
	return 0;
	}
struct student *max_aver(struct student *p_stu)
	{
	void average(float a);
	struct student *p1,*p2;
	float sum,aver,max;
	int i;
	for(p1=stu;p1<(stu+5);p1++)
		{
		for(sum=0,i=0;i<3;i++)
			{sum=sum+p1->score[i];}
		aver=sum/3;
		if(aver>max)
			{max=aver;p2=p1;}
		}
	average(max);
	return(p2);
	}
void average(float a)
	{
	printf("��ѧ����ƽ���ɼ����:Average=%0.2f\n",a);
	}
