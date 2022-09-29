#include<stdio.h>
int sum(int x,int y)
	{
	return(x+y);
	}

float aver(float s)
	{
	return(s/10);
	}

int main()
	{
	 int sum(int x,int y);
	 float aver(float s);
	 int a=0,i,score[10],j=0;
	 printf("请输入10位同学的成绩：");
	 for(i=0;i<10;i++)
		 scanf("%d",&score[i]);
	 for(i=0;i<10;i++)
	  a=a+sum(j,score[i]);
	printf("总分:sum=%d\n平均分:aver=%0.2f\n",a,aver((float)a));
	return 0;
	}
