#include"stdio.h"
void main()
{
/*	int p=1,i;
	for(i=p+2;i<11;i+=2)
	{
		p=p*i;	
	}
printf("%d\n",p);
	int i,s,x;
	x=s=1;
	for(i=1;i<=100;i++)
	{
	x=-1*x;
	s=s+x/(i+1);
	}
	printf("%d\n  ",s);*/
	int s=1,sum=1,d,t;
	for (d=2;d<=100;d++)
	{
	s=-1*s;
	t=s*(1/d);
	sum=sum+t;
	d=d+1;
	}
	printf("%d\n ",sum);
}
