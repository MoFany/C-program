#include<stdio.h>
struct student
	{
	int num;
	char name[20];
	float score;
	};
int main()
	{
	struct student stu[5];
	struct student *p;
	printf("������ṹ����������ÿ��Ԫ�ص�ֵ!\n");
	for(p=stu;p<(stu+5);p++)
		scanf("%d%s%f",&p->num,p->name,&p->score);
	//��sanf�����ָ�������������ṹ�����������Ԫ��ֵʱ����Ϊ:&p->name������ʽ
	printf("����ָ��ṹ�����͵�ָ�����,���ṹ�����������ÿ����Ա˳�����!\n");
	for(p=stu;p<(stu+5);p++)
		printf("%d %s %0.2f\n",(*p).num,(*p).name,(*p).score);
	//�ȼ���:printf("%d%s%f\n",p->num,p->name,p->score);
	return 0;
	}

