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
	 printf("������10λͬѧ�ĳɼ���");
	 for(i=0;i<10;i++)
		 scanf("%d",&score[i]);
	 for(i=0;i<10;i++)
	  a=a+sum(j,score[i]);
	printf("�ܷ�:sum=%d\nƽ����:aver=%0.2f\n",a,aver((float)a));
	return 0;
	}
