#include<stdio.h>
int Min,Max,I;
int main()
	{	
	float average(int array[],int n);
	int a[10];
	printf("请输入10名同学的成绩：");
	for(I=0;I<10;I++)
		scanf("%d",&a[I]);	
	printf("平均分：aver=%0.2f\n",average(a,10));
	return 0;
	}
float average(int array[],int n)
	{
	int sum=0,i,j,t;
	float aver;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(array[j]>array[j+1])
			{t=array[j];array[j]=array[j+1];array[j+1]=t;}//从小到大排序
	Max=array[9];
	Min=array[0];
	printf("最高分：Max=%d,最低分：Min=%d\n",Max,Min);
	for(I=0;I<10;I++)
		sum=sum+array[I];
	aver=((float)sum)/n;
	return(aver);
	}