#include<stdio.h>

int max2(int x,int y)//--------------����max2��������
	{
	return(x>y?x:y);
	}

int max1(int m,int n)//--------------����max1��������
	{
	int max2(int x,int y);//---------��������max2
	int c,d,j,k;
	printf("Please enter c and d:");
	scanf("%d%d",&c,&d);
	j=max2(c,d);//---------------���ú���max2
	k=m>n?m:n; 
	return(j>k?j:k);
	}

int main()
	{
	int max1(int m,int n);//------��������max1
	int a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("max=%d\n",max1(a,b));//--------���ú���max1
	return 0;
	}