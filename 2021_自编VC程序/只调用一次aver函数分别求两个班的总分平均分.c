#include<stdio.h>
int sum(int x,int y)
	{return(x+y);}
float aver(float s)
	{
	int sum(int x,int y);
	int n,score1[35],sumk=0;
	printf("������2��35��ͬѧ�ĳɼ���");
	for(n=0;n<35;n++)
		scanf("%d",&score1[n]);
	for(n=0;n<35;n++)
		sumk=sumk+sum(0,score1[n]);
	printf("2���ܷ�:sum=%d��2��ƽ����:aver=%0.2f\n",sumk,((float)sumk)/35);
	return(s/30);
	}

int main()
	{
	 int sum(int x,int y);
	 float aver(float s);
	 int suma=0,i,score[10];
	 printf("������1��30��ͬѧ�ĳɼ���");
	 for(i=0;i<30;i++)
		 scanf("%d",&score[i]);
	 for(i=0;i<30;i++)
	  suma=suma+sum(0,score[i]);
	printf("1���ܷ�:sum=%d��1��ƽ����:aver=%0.2f\n",suma,aver((float)suma));

	return 0;
	}
