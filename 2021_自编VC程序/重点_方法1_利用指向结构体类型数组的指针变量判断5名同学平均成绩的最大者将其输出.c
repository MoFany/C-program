#include<stdio.h>
struct student
	{
	int num;
	char name[20];
	float score[3];
	};
int main()
	{
	struct student stu[5];
	struct student *p,*p1;
	float sum,average,max_aver;
	int i;
	printf("���������ѧ������Ϣ!\n");
	for(p=stu;p<(stu+5);p++)
		scanf("%d%s%f%f%f",&p->num,p->name,&p->score[0],&p->score[1],&p->score[2]);
	for(p=stu;p<(stu+5);p++)
		{	
		for(sum=0,i=0;i<3;i++)
			{sum=sum+p->score[i];}
		average=sum/3;
		if(average>max_aver)
			{
			max_aver=average;
 			p1=p;
			}
		}
	printf("���ƽ���ɼ���ߵ�ѧ����Ϣ!\n");
	printf("%d %s %0.2f %0.2f %0.2f\nƽ���ɼ�:Average=%0.2f\n",p1->num,p1->name,p1->score[0],p1->score[1],p1->score[2],max_aver);
	return 0;
	}

