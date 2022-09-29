#include<stdio.h>
int main()
	{
		int fun1(int n);
		int n;
		printf("------------求n!的阶乘和-------------\n输入一个数n=");
		scanf("%d",&n);
		printf("sum%d!=%d\n",n,fun1(n));
		return 0;
	}
int fun1(int n)
	{
		int fun2(int n);
		if(n==1)
			return 1;
		else
			return fun2(n)+fun1(n-1);
	}
int fun2(int n)
	{
		if(n==1)
			return 1;
		else
			return n*fun2(n-1);
	}
