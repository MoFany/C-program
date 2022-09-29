#include<stdio.h>
int fac(int n,int a)
{
	if (n==1)
		return 1;
	else
		return fac(n-1,a)*a;
}
int sum_fac(int n,int a)
{
	if (n==0)
		return 1;
	else
		return sum_fac(n-1,a)+fac(n,a);
}
int main()
{
	int n,a;
	printf("请以a^n的格式输入a与n:");
	scanf("%d%d",&a,&n);
	printf("函数调用!\n");
	printf("%d^%d=%d\n",a,n,sum_fac(n,a));
	return 0;
}