#include<stdio.h>
int main()
	{
	struct student{int number;char name[20];float score;}student1,student2;//定义一个结构体类型str student其中有两个结构体变量student1和student2

	printf("Please enter student1 and student2!\n");
	scanf("%d%s%f",&student1.number,student1.name,&student1.score);
	scanf("%d%s%f",&student2.number,student2.name,&student2.score);
	if(student1.score>student2.score)//比较结构体变量所引用的结构体成员的大小
		printf("student1:%d %s %.2f\n",student1.number,student1.name,student1.score);
	else
		if(student2.score>student1.score)
			printf("student2:%d %s %.2f\n",student2.number,student2.name,student2.score);
		else
			{printf("student1:%d %s %.2f\n",student1.number,student1.name,student1.score);
			 printf("student2:%d %s %.2f\n",student2.number,student2.name,student2.score);}
	}

