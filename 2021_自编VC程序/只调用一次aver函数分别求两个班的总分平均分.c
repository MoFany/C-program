#include<stdio.h>
int sum(int x,int y)
	{return(x+y);}
float aver(float s)
	{
	int sum(int x,int y);
	int n,score1[35],sumk=0;
	printf("请输入2班35名同学的成绩：");
	for(n=0;n<35;n++)
		scanf("%d",&score1[n]);
	for(n=0;n<35;n++)
		sumk=sumk+sum(0,score1[n]);
	printf("2班总分:sum=%d，2班平均分:aver=%0.2f\n",sumk,((float)sumk)/35);
	return(s/30);
	}

int main()
	{
	 int sum(int x,int y);
	 float aver(float s);
	 int suma=0,i,score[10];
	 printf("请输入1班30名同学的成绩：");
	 for(i=0;i<30;i++)
		 scanf("%d",&score[i]);
	 for(i=0;i<30;i++)
	  suma=suma+sum(0,score[i]);
	printf("1班总分:sum=%d，1班平均分:aver=%0.2f\n",suma,aver((float)suma));

	return 0;
	}
