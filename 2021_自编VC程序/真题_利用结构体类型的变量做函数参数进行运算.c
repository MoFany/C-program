#include<stdio.h>
struct students
	{
	int num;
	char name[10];
	float score[3];
	};//���������ͣ�����ṹ�����͵ı���
int main()
	{
		void print(struct students stu[]);
		struct students stu[3];//����ṹ�����͵�������������Ԫ��
		int i;
		printf("Please enter student infromation!\n");
		for(i=0;i<3;i++)
			scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		print(stu);
		return 0;
	}
void print(struct students stu[])//�Խṹ�����͵�ָ�����Ϊ�������β�
	{
	int i;
	float aver;
	printf("Output student infromation!\n\n");
	for(i=0;i<3;i++)
		{
			printf("Student number:%d\nName:%s\nScores:%5.1f%5.1f%5.1f\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
			aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
			printf("The average grade of student with %s is %3.1f\n\n",stu[i].name,aver);
		}
	}