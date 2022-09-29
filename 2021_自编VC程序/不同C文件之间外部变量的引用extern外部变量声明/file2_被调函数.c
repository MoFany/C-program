#include<stdio.h>
int A,B,M;
int exponent(int x,int y)
{
	int exp=1,j;
	printf("Please enter B:");
	scanf("%d",&B);
	if(y==0)
		exp=1;
	else
		for(j=1;j<=y;j++)//求A的M次方
			exp=exp*x;
	return(exp);
}