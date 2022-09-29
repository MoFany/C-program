#include<stdio.h>
int main()
{

	int i,a,b,c,d;
	printf("水仙花数有：");
	for(i=100;i<1000;i++)
	{
	a=i%100%10;
	b=i%100/10;
	c=i/100;
	d=a*a*a+b*b*b+c*c*c;

	if(i==d)
		printf("%d ",i);	
	}
	printf("\n");
return 0;
}
