#include<stdio.h>

int max2(int x,int y)//--------------定义max2被调函数
	{
	return(x>y?x:y);
	}

int max1(int m,int n)//--------------定义max1被调函数
	{
	int max2(int x,int y);//---------声明函数max2
	int c,d,j,k;
	printf("Please enter c and d:");
	scanf("%d%d",&c,&d);
	j=max2(c,d);//---------------调用函数max2
	k=m>n?m:n; 
	return(j>k?j:k);
	}

int main()
	{
	int max1(int m,int n);//------声明函数max1
	int a,b;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	printf("max=%d\n",max1(a,b));//--------调用函数max1
	return 0;
	}